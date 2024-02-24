public class Auto extends Veicoli
{
    public boolean frenoamano;
    public Auto()
    {
        frenoamano=true;
    }
    public void Entrata()
    {
        if(!accensione || !frenoamano){
                accensione=true;
                frenoamano=false;
        }
        accensione=false;
        System.out.println("Auto spenta...");
    }
    public void Uscita()
    {
        if(!accensione || frenoamano){
                accensione=true;
                frenoamano=false;
        }
    }
}