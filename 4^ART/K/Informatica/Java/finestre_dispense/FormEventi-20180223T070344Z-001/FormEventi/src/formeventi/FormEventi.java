/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package formeventi;
import javax.swing.*;
import java.awt.*;
/**
 *
 * @author Grazia
 */

public class FormEventi  extends JFrame{

   public FormEventi ( int x, int y, int l, int a){
       super();
       setBounds(x,y,l,a);
       JPanel p= new JPanel(new GridLayout(3,2));
       JButton b= new JButton("scrivi");
       b.setFont(new Font("Bitstream Vera Sans Mono", Font.PLAIN, 30));
       JLabel la= new JLabel("Premi un bottone");
        la.setFont(new Font("Bitstream Vera Sans Mono", Font.PLAIN, 30));
        JButton b1= new JButton("concatena");
         b1.setFont(new Font("Bitstream Vera Sans Mono", Font.PLAIN, 30));
         JButton b2= new JButton("pulisci");
          b2.setFont(new Font("Bitstream Vera Sans Mono", Font.PLAIN, 30));
       JTextField t=new JTextField(50);
        t.setFont(new Font("Bitstream Vera Sans Mono", Font.PLAIN, 30));
       p.add(t);
       p.add(la);
       p.add(b);
        p.add(b1);
         p.add(b2);
       PrimoEvento e = new PrimoEvento(t);
        b.addActionListener(e);
         b1.addActionListener(e);
          b2.addActionListener(e);
       Container c=this.getContentPane();
       c.add(p);
       setTitle("Finestra con tre componenti");
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
         setVisible(true);
  
      // add(la);
       setVisible(true);
 
   }
   /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    FormEventi f= new FormEventi(0,50,1000, 150);
    
    }
    
}
