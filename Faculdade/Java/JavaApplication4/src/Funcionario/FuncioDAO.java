package Funcionario;

public class FuncioDAO {
    
    public String mostarCodTel(FuncioDTO funcioDTO){
        
        return "O Código informado foi: " + funcioDTO.getCod() + "\nO Telefone informado foi: " + funcioDTO.getTel();
        
    }
    
}
