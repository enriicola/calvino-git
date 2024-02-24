import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

   public class es2 extends JFrame implements ActionListener{
    JButton b;
    JButton b1;
    JLabel l;
    JLabel l1;
    JLabel l2;
    JLabel l3;
    JLabel l4;
    JTextField t;
    JTextField t1;
    JTextField t2;
    JTextField t3;
    
    public static void main(String[] args) {
        int r = 5;
        int c = 2;
        es2 f = new es2(r,c);
        f.setSize(400,200);
        f.setVisible(true);
    }
    public es2(int r, int c){
        Container cp = getContentPane();
        JPanel p = new JPanel(new GridLayout(r,c));
        JPanel p1= new JPanel();
        cp.add(p);
        cp.add(p1,BorderLayout.SOUTH);
        b = new JButton("Mostra");
        b1 = new JButton("Reset");
        l = new JLabel("Nome: ");
        l1 = new JLabel("Cognome: ");
        l2 = new JLabel("Età: ");
        l3 = new JLabel("Indirizzo: ");
        l4 = new JLabel();
        t = new JTextField(20);
        t1 = new JTextField(20);
        t2 = new JTextField(20);
        t3 = new JTextField(20);
        
        p.add(l);
        p.add(t);
        p.add(l1);
        p.add(t1);
        p.add(l2);
        p.add(t2);
        p.add(l3);
        p.add(t3);
        p.add(l4);
        p1.add(b);
        b.addActionListener(this);
        b.setActionCommand("Mostra");
        p1.add(b1);
        b1.addActionListener(this);
        b1.setActionCommand("Reset");
    }
    @Override
    public void actionPerformed(ActionEvent event) {
        String str = t.getText();
        String str1 = t1.getText();
        String str2 = t2.getText();
        String str3 = t3.getText();
        if("Mostra".equals(event.getActionCommand())){
            l4.setText(str+", "+str1+", "+str2+", "+str3);
        }
        if("Reset".equals(event.getActionCommand())){
            t.setText("");
            t1.setText("");
            t2.setText("");
            t3.setText("");
        }
        l.setVisible(true);
  }
}