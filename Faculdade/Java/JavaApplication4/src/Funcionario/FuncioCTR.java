package Funcionario;

public class FuncioCTR {
    
     FuncioDAO funcioDAO = new FuncioDAO();
    
    public String mostrarCodTel(FuncioDTO funcioDTO){
        
        return funcioDAO.mostarCodTel(funcioDTO);
        
    }
    
}
