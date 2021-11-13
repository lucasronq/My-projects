package Vogal_Ex07;

import javax.swing.JOptionPane;

public class PrincipalVogal {
    public static void main (String[] args){
        String letra;
        int exit = 1;
        Vogal vogal = new Vogal();
               
       
        do{
            
            for(int i = 1; i <= 5; i++){
                letra = JOptionPane.showInputDialog("Informe uma letra: ");
                vogal.verificador(letra);
            }
            
                JOptionPane.showMessageDialog(null, "Total de 5 caracteres cadastrados!");
                exit = Integer.parseInt(JOptionPane.showInputDialog("Deseja continuar digite 1\nse não digite 0"));
                
            if (exit != 1 && exit != 0){
                JOptionPane.showMessageDialog(null, "Opção invalida.");
            }

                

        }while(exit != 0);
        
        JOptionPane.showMessageDialog(null, "O total de vogais A foi de: "+vogal.mostraA());
        JOptionPane.showMessageDialog(null, "O total de vogais E foi de: "+vogal.mostraE());
        JOptionPane.showMessageDialog(null, "O total de vogais I foi de: "+vogal.mostraI());
        JOptionPane.showMessageDialog(null, "O total de vogais O foi de: "+vogal.mostraO());
        JOptionPane.showMessageDialog(null, "O total de vogais U foi de: "+vogal.mostraU());
        JOptionPane.showMessageDialog(null, "O total de consoantes foi de: "+vogal.mostraConsoante());
        
    }
     
}
