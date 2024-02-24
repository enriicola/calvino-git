import java.lang.String;
import java.util.Scanner;
public class Sim
{
    Scanner input=new Scanner(System.in);
    double credito, minutichiamata, costominuto, r;
    private String operatore, op;
    private boolean chiamata;
    private int x,n_tel;
    
    public Sim()
    {
        chiamata=false;
        costominuto = 0.10;
    }

    public int menu(int x)
    {
        Scanner input=new Scanner(System.in);
        System.out.println("0) Uscita.");
        System.out.println("1) Controlla credito residuo.");
        System.out.println("2) Ricarica la sim.");
        System.out.println("3) Effettua una chiamata.");
        System.out.println("            Digita la scelta: ");
        return x = input.nextInt();
    }
    
    public void setRicarica()
    {
        System.out.println("Inserisci l'importo della ricarica: ");
        double r = input.nextInt();
        credito +=r;
        System.out.println("Completata! Adesso il tuo credito è di " + credito + " euro.");
    }
    
    public void setCredito() { credito=10; }
    
    public double getCredito() { return credito; }
    
    //public void setCostominuto(double costominuto) {  }
    
    public void telefonata()
    {
        if(credito>=costominuto)
        {
            chiamata=true;
            System.out.println("Digita il numero di cellulare che vuoi chiamare: ");
                int n_tel = input.nextInt();
                System.out.println("Composizione...("+n_tel+")");
            while(chiamata)
            {
                    for(int i=0; i<100000; i++);
                
                    credito -= costominuto;
                    if(credito<=0)
                    {
                            chiamata=false;
                            System.out.println("Chiamata terminata. Credito esaurito.");
                    }
            }
        }
        else
            {
            chiamata=false;
            System.out.println("Credito insufficiente...barbone...");
            }
    }
}