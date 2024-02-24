/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package formeventi;
import java.awt.event.*;
import javax.swing.*;
/**
 *
 * @author Grazia
 */
public class PrimoEvento  implements ActionListener{
    private JTextField campo;
public PrimoEvento(JTextField d) {
campo= d;
}
    @Override
    public void actionPerformed(ActionEvent ev) {
    String bottone = ev.getActionCommand();
if (bottone.equals("pulisci"))
    campo.setText("");
else
    if (bottone.equals("concatena"))
        campo.setText(campo.getText()+ "aggiunto");
    else
      campo.setText("Tasto premuto");  
}
 
}
