package Num_Ex05;

import javax.swing.JOptionPane;

public class PrincipalSoma {
    public static void main(String [] args){
        Soma soma = new Soma();
        
        for(int i = 1; i <= 10; i++){
            soma.somar_Num(Integer.parseInt(JOptionPane.showInputDialog("Entre com o " + i + " número: "))); 
        }
        JOptionPane.showMessageDialog(null, soma.mostrar());
    }
   
}
