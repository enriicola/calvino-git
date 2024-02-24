import java.util.Scanner;
import java.lang.String; 
public class Main
{
    public static void main(String[] args)
    {
       Scanner scannerIO = new Scanner(System.in);
       Computer c, c1;
       
       int scelta=0;
       System.out.println("Di quale pc vuoi avere la scheda tecnica?");
       do{
           System.out.println("0) Uscita. \n1) Visualizza la scheda tecnica di Bobby. \n2) Visualizza la scheda tecnica di Frank.");
           System.out.println("         Inserisci la scelta: ");
           scelta = scannerIO.nextInt();
       
           switch(scelta){
               case 1:
                    System.out.println("----- Scheda tecnica Samsung -----");
                    System.out.println("Modello: ");
                    System.out.println("Anno rilascio: ");
                    System.out.println("Dimensioni: ");
                    System.out.println("Display: ");
                    System.out.println("Peso:  ");
                    System.out.println("Sistema Operativo: ");
                    System.out.println("Cache: ");
                    System.out.println("Ram: "+r.getRam(scelta));
                    System.out.println("Hard-Disk: "+hd.getHD(scelta));
                    System.out.println("Processore: ");
                    System.out.println("Numero porte usb: ");
                    break;
               default:
                    System.out.println("\n\n DIGITA UN NUMERO VALIDO!");
                    break;
           }
       }while(scelta!=0);
       System.out.println("Arrivederci...");
    }
}