public class Moto extends Veicoli
{
    public boolean cavalletto;
    public Moto()
    {
        cavalletto=false;
    }
    public void Entrata()
    {
        if(!accensione || cavalletto){
                accensione=true;
                cavalletto=false;
        }
        accensione=false;
        cavalletto=true;
        System.out.println("Moto spenta...Cavalletto abbassato...");
    }
    public void Uscita()
    {
        if(accensione==false || cavalletto==true){
                cavalletto=false;
                accensione=true;
        }
    }
}