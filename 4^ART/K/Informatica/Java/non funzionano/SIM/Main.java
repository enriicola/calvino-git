import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Sim s=new Sim();
        Scanner input=new Scanner(System.in);
        int x=1;    double r=0;
        //credito provvisorio
        s.setCredito();
        do{
            System.out.println("-----SIM MANAGMENT'S APP-----\n");
            switch(s.menu(x)){
                case 0:
                System.out.println("Arrivederci e buona giornata.");
                x=0;
                break;
                
                case 1:
                System.out.println("Il tuo credito residuo è di " + s.credito + " euro.");
                x=1;
                break;
                
                case 2:
                s.setRicarica();
                x=2;
                break;
                
                
                case 3:
                s.telefonata();
                x=3;
                break;
            }
            if(x!=0)
            {
                System.out.println("Digita un tasto per continuare...");
                    int x1 = input.nextInt();
            }
        }
        while(x!=0);
    }
}