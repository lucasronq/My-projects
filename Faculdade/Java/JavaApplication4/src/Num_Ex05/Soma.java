package Num_Ex05;


public class Soma {
    private int num;
    private int soma;
    private String print = "";
    public void somar_Num(int num){
        this.num = num;
        this.soma = soma;
        
        this.soma = soma + num;
       
    }
    
    public String mostrar(){
        this.print = "A soma de todos os números é igual: " + this.soma;
        
        return this.print;
    }
    
}
