package Encapsulamento;


public class ClienteCTR {
    
    ClienteDAO clienteDAO = new ClienteDAO();
    
    public String mostrarNomeRg(ClienteDTO clienteDTO){
        
        return clienteDAO.mostarNomeRg(clienteDTO);
        
    }
    
    public String mostrarNomeIdade(ClienteDTO clienteDTO){
        
        return clienteDAO.mostrarNomeIdade(clienteDTO);
        
    }
    
}
