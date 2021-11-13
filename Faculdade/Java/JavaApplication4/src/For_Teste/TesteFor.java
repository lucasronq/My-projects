package For_Teste;


public class TesteFor {
    private int num;
    private String print = "";
    public String calcular_Tab(int num){
        this.num = num;
        
        for(int i = 1; i <= 10; i++){
            this.print = this.print + "\n" + i + " X " + this.num + " = " + i*this.num;
        }
        return this.print;
    }
    
}
