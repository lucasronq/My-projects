package Encapsulamento;


public class ClienteDAO {
    
    public String mostarNomeRg(ClienteDTO clienteDTO){
        
        return "O nome informado foi: " + clienteDTO.getNome() + "\nO RG informado foi: " + clienteDTO.getRg();
        
    }
    
    public String mostrarNomeIdade(ClienteDTO clienteDTO){
        
        return "O nome informado foi: " + clienteDTO.getNome() + "\nA idade informada foi: " + clienteDTO.getIdade();
    }
    
}
