
package Num_Ex06;

public class Maior {
    private int num;
    private int maior = 0;
    private int menor = 9999;
    private String print = "";
    public void verif_Maior(int num){
        this.num = num;
        this.maior = maior;
        this.menor = menor;
        
        for(int i = 1; i <= 10; i++){
            if (num > maior){
                this.maior = num;
            }
            if (num < menor){
                this.menor = num;
            }
        }
           
        
    }
    public String mostrarMaior(){
        this.print = "O maior número é: "+ this.maior;
        
        return this.print;
   }
    public String mostrarMenor(){
        this.print = "O menor número é: "+ this.menor;
        
        return this.print;
   }
}
