import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

   public class es3 extends JFrame implements ActionListener{
    JButton b;
    JButton b1;
    JLabel l;
    JLabel l1;
    JLabel l2;
    JLabel l3;
    JTextField t;
    JTextField t1;
    JTextField t2;
    JTextField t3;
    
    public static void main(String[] args) {
        int r = 4;
        int c = 2;
        es3 f = new es3(r,c);
        f.setSize(400,200);
        f.setVisible(true);
    }
    public es3(int r, int c){
        Container cp = getContentPane();
        JPanel p = new JPanel(new GridLayout(r,c));
        JPanel p1= new JPanel();
        cp.add(p);
        cp.add(p1,BorderLayout.SOUTH);
        b = new JButton("Mostra");
        b1 = new JButton("Reset");
        l = new JLabel("Ore: ");
        l1 = new JLabel("Minuti: ");
        l2 = new JLabel("Secondi: ");
        l3 = new JLabel();
        t = new JTextField(20);
        t1 = new JTextField(20);
        t2 = new JTextField(20);
        p.add(l);
        p.add(t);
        p.add(l1);
        p.add(t1);
        p.add(l2);
        p.add(t2);
        p.add(l3);
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
        int i = Integer.parseInt(str);
        int i1 = Integer.parseInt(str1);
        int i2 = Integer.parseInt(str2);
        int s;
        
        if("Mostra".equals(event.getActionCommand())){
            l3.setText(i*3600+i1*60+i2+" secondi");
        }
        if("Reset".equals(event.getActionCommand())){
            t.setText("");
            t1.setText("");
            t2.setText("");
        }
        l.setVisible(true);
  }
}