package Vogal_Ex07;


public class Vogal {
    
    private String letra;
    private int a;
    private int e;
    private int i;
    private int o;
    private int u;
    private int consoante;
    
    
    public void verificador(String letra){
        this.letra = letra;
        if(letra.equalsIgnoreCase("a")){
            this.a++;
        }
        else if(letra.equalsIgnoreCase("e")){
            this.e++;
        }
        else if(letra.equalsIgnoreCase("i")){
            this.i++;
        }
        else if(letra.equalsIgnoreCase("o")){
            this.o++;
        }
        else if(letra.equalsIgnoreCase("u")){
            this.u++;
        }
        else{
            this.consoante++;
        }
        
    }
    
    public int mostraA(){
        
        return this.a;
    }
    
    public int mostraE(){
        
        return this.e;
    }
    
    public int mostraI(){
        
        return this.i;
    }
    
    public int mostraO(){
        
        return this.o;
    }
    
    public int mostraU(){
        
        return this.u;
    }
    
    public int mostraConsoante(){
        
        return this.consoante;
    }
}  