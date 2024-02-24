import java.util.Scanner;
public class Parcheggio
{
    public final int N=10;
    private int i,ca,cm;
    public boolean x;
    private double tariffa, tempo, oraEntrata, oraUscita, pagamento;
    Scanner input=new Scanner(System.in);
    Veicoli park[]=new Veicoli[N];
    
    public Parcheggio(boolean a[],boolean m[])
    {
        tariffa=1.50;
        for(i=0;i<park.length;i++){
            park[i]=null;
            a[i]=false;
            m[i]=false;
        }
        // valori provvisori
            oraEntrata=9;
            oraUscita=17;
            park[7]=new Auto(); a[7]=true;
            park[4]=new Auto(); a[4]=true;
            park[0]=new Moto(); m[0]=true;
            park[9]=new Moto(); m[9]=true;
            ca=2;   cm=2;
    }
    public void Visualizza(boolean a[])
    {
        for(i=0;i<park.length;i++)
        {
            if(park[i] == null)
                System.out.println("Zona "+i+": LIBERA");
            else
                    if(a[i])
                        System.out.println("Zona "+i+": occupata (auto)");
                    else
                        System.out.println("Zona "+i+": occupata (moto)");
         }
    }
    public void Pagamento()
    {
        System.out.println("Ora entrata: "+oraEntrata+"    Ora uscita: "+oraUscita);
        tempo=oraUscita - oraEntrata;
        System.out.println("Ore Trascorse: "+tempo+"   Tariffa Oraria: "+tariffa);
        pagamento= tariffa*tempo;
        System.out.println("Pagamento da effettuare in contanti: "+pagamento);
        System.out.println("...pagamento effettuato...\nArrivederci...");
    }
    public int Entrata(Auto auto,boolean a[])
    {
        if(ca+cm < N){
            for(i=0;i<park.length;i++)
                if(park[i] == null){
                    park[i] = new Auto();   a[i]=true;
                    ca++;
                    break;
                }
        }
        else{
            System.out.println("PARCHEGGIO PIENO");
            i=N;
        }
        return i;
    }
    public boolean Uscita(Auto auto,boolean a[])
    {
        if(ca!=0){
            System.out.println("\nQuale auto deve uscire?\n");
            for(i=0;i<park.length;i++)
                if(a[i])
                    System.out.println("Auto zona numero "+i);
            System.out.println("        Digita il numero della zona scelta: ");
                    int scelta=input.nextInt();
            park[scelta] = null;    a[scelta]=false;
            ca--;
            x=true;
            System.out.println("Auto in zona numero "+scelta+" uscita");
        }
        else{
            System.out.println("PARCHEGGIO VUOTO");
            x=false;
        }
        return x;
    }
    public int EntrataMoto(Moto moto,boolean m[])
    {
        if(ca+cm < N){
            for(i=0;i<park.length;i++)
                if(park[i] == null){
                    park[i] = new Moto();   m[i]=true;
                    cm++;
                    break;
                }
        }
        else{
            System.out.println("PARCHEGGIO PIENO");
            i=N;
        }
        return i;
    }
    public boolean UscitaMoto(Moto moto,boolean m[])
    {
        if(cm!=0){
            System.out.println("\nQuale moto deve uscire?\n");
            for(i=0;i<park.length;i++)
                if(m[i])
                    System.out.println("Moto zona numero "+i);
            System.out.println("        Digita il numero della zona scelta: ");
                    int scelta=input.nextInt();
            park[scelta] = null;    m[scelta]=false;
            cm--;
            x=true;
            System.out.println("Auto in zona numero "+scelta+" uscita");
        }
        else{
            System.out.println("PARCHEGGIO VUOTO");
            x=false;
        }
        return x;
    }
} 