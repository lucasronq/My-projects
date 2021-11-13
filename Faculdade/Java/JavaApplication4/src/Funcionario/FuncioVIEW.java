package Funcionario;

import javax.swing.JOptionPane;

public class FuncioVIEW {
    
    public static void main(String[] args){
        
        try{
            FuncioDTO funcioDTO = new FuncioDTO();
            FuncioCTR funcioCTR = new FuncioCTR();
            
            funcioDTO.setCod(Integer.parseInt(JOptionPane.showInputDialog("Informe o seu Código: ")));
            funcioDTO.setTel(JOptionPane.showInputDialog("Informe o seu Telefone: "));
            
            JOptionPane.showMessageDialog(null, funcioCTR.mostrarCodTel(funcioDTO));
            
        }
        
        catch(Exception e){
            
            JOptionPane.showMessageDialog(null, "Erro no sistema: " + e.getMessage());
            
        }
    }
}
