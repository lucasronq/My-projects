package Solo_Ex04;
import javax.swing.JOptionPane;

public class PrincipalSolo {
    public static void main(String[] args){
        Solo solo = new Solo();
        
        JOptionPane.showMessageDialog(null, "A situação do solo é: " +
                solo.verificar(Double.parseDouble(JOptionPane.showInputDialog("Informe a quantidade de água no solo"))));
    }
    
}
