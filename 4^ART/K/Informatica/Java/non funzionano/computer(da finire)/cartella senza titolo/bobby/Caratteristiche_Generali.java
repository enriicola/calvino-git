import java.lang.String; 
public class Caratteristiche_Generali
{
    // variabili d'istanza - sostituisci l'esempio che segue con il tuo
    public int anno, usb;
    public double display, peso;
    public String modello, dimensioni;

    public void caratteristiche_generali(int scelta)
    {
        switch(scelta){
               case 1:
                    Caratteristiche_Generali samsung = new Caratteristiche_Generali();
                    anno=2010;
                    usb=3;
                    display=10.1;
                    peso=1.24;
                    String modello=new String("N150");
                    String dimensioni=new String("264x27x188 mm");
                    
                    break;
        }
     }
}
