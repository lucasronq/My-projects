package Num_Ex06;

import javax.swing.JOptionPane;

public class PrincipalMaior{
    public static void main(String [] args){
        Maior maior = new Maior();
        
        for(int i = 1; i <= 10; i++){
            maior.verif_Maior(Integer.parseInt(JOptionPane.showInputDialog("Entre com o " + i + "º número: ")));
        }
        JOptionPane.showMessageDialog(null, maior.mostrarMaior());
        JOptionPane.showMessageDialog(null, maior.mostrarMenor());
    }
    
}
