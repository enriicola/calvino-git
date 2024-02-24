import java.util.Scanner;
public class main
{
    public static void main(String[] args)
    {
        triangoli t = new triangoli();
        cerchio c = new cerchio();
        rettangoli r = new rettangoli();    
        Scanner scannerIO = new Scanner (System.in);
        int x;
        
        do{
            System.out.println("Di quale figura vuoi calcolare i dati: ");
            System.out.println("1) Triangolo E Q U I L A T E R O.");
            System.out.println("2) Cerchio.");
            System.out.println("3) Rettangolo.");
            System.out.println("Vuoi uscire? Premi 0");
            x = scannerIO.nextInt();
            switch(x)
            {
                case 1:
                    System.out.println("Inserisci il valore della base del triangolo: ");
                    t.base = scannerIO.nextInt();
                    System.out.println("Inserisci il valore dell'altezza del triangolo: ");
                    t.altezza = scannerIO.nextInt();
                    System.out.println("Il valore dell'area del triangolo è:"+t.area());
                    System.out.println("Il valore del perimetro del triangolo è:"+t.perimetro());
                    break;
                case 2:
                    System.out.println("Inserisci il valore del raggio del cerchio: ");
                    c.raggio = scannerIO.nextInt();
                    System.out.println("Il valore dell'area del cerchio è"+c.area());
                    System.out.println("Il valore della circonferenza:"+c.circon());
                    break;
                case 3:
                    System.out.println("Inserisci il valore della base del rettangolo: ");
                    r.base = scannerIO.nextInt();
                    System.out.println("Inserisci il valore dell'altezza del rettangolo: ");
                    r.altezza = scannerIO.nextInt();
                    System.out.println("Il valore dell'area è"+r.area());
                    System.out.println("Il valore del perimetro è:"+r.perimetro());
                    break;
            }
        }
       while(x!=0);
       System.out.println("I nostri riguardi.");
    }
}