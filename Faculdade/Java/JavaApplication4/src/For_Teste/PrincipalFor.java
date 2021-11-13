package For_Teste;

import javax.swing.JOptionPane;

public class PrincipalFor {
    public static void main(String [] args){
        TesteFor testefor = new TesteFor();
        JOptionPane.showMessageDialog(null, testefor.calcular_Tab(Integer.parseInt(JOptionPane.showInputDialog("Informe um número: "))));
                
    }
    
}
