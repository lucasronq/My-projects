package Solo_Ex04;

public class Solo {
    private double valor;
    private String resposta;
    
    public String verificar(double valor){
        this.valor = valor;
        
        if(this.valor <= 10){
            this.resposta = "Rochosa";
        }
        else{
            if((this.valor > 10) && (this.valor <= 40)){
                this.resposta = "Firme";
            }
            else{
                if((this.valor > 40) && (this.valor <= 80)){
                    this.resposta = "Pantanosa";
                }
                else{
                    this.resposta = "Quantidade de água invalida";
                }
            }
        }
        return this.resposta;
    }
}
