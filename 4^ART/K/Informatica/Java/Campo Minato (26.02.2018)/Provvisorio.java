import java.awt.*;
import java.awt.event.*;
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.Choice;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.Label;
import java.awt.TextField;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

public class Provvisorio
{
    public Provvisorio()
    {
        //costruttore
    }

    public void prova1()
    {
        Frame f = new Frame("Finestra con pennello");
        Panel p = new Panel();
        //f.setLayout(null); // Se non si vuole impostare nessun  layout
        //f.setLayout(new FlowLayout(FlowLayout.CENTER)); //imposta tutte le 
        //componenti su una stessa riga
        // nello stesso ordine in cui vengono aggiunte
        //f.setLayout(new BorderLayout());//divide la finestra in centro,nord,sud,etc..
        //f.add(b1, "South"); // Indica la posizione del bottone nel layout
        f.setLayout(new GridLayout(10,10,10,10));// diviso in 3 righe e 2 colonne 
        //10 spaziatura orizzontale 10 spaziatura verticale

        Button b1 = new Button("Invia");
        b1.setBounds(30, 30, 50, 50);
        TextField nome = new TextField(10);

        p.add(b1,"Left");
        f.setSize(700,500);
        f.setResizable(false);
        p.setBounds(200, 100,400, 200);
        p.setBackground(Color.red);
        f.setLocation(300,100);
        f.add(p);
        p.add(new Label("Nome :",Label.RIGHT));
        p.add(nome);
        f.setVisible(true);
    }
}