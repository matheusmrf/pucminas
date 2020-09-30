import java.time.*;
import java.lang.String;
import java.util.Scanner;
import java.io.File;

public class main {

    class Jogador
    {
        //Atributos
        private int id;
        private String nome;
        private int altura;
        private int peso;
        private String universidade;
        private String anoNascimento;
        private String cidadeNascimento;
        private String estadoNascimento;

        Jogador(int id, String nome, int altura, int peso, String universidade,
		   String anoNascimento, String cidadeNascimento, String estadoNascimento){
         
        this.id = id;
		this.nome = nome;
        this.altura = altura;
        this.peso = peso;
		this.universidade = universidade;
		this.anoNascimento = anoNascimento;
		this.cidadeNascimento = cidadeNascimento;
		this.estadoNascimento = estadoNascimento;
	}

	Jogador(String players){
		Arq.openRead("players.csv");
		String lida = Arq.readLine();
		Arq.close();
		
		String[] dados = parseJogador(lida);
	
		this.id = dados[0];
		try{
			this.nome = Integer.parseInt(dados[1]);
		}
		catch(Exception e){
			this.altura = 0;
		}
		try{
			dados[2]=dados[2].replaceAll(",", "");
			this.peso = Integer.parseInt(dados[2]);
		}
		catch(Exception e){
			this.peso = 0;
		}
		this.peso = dados[3];
		this.universidade = dados[4];
		this.anoNascimento = dados[5];
		this.cidadeNascimento = dados[6];
		this.estadoNascimento = dados[7];	
	}

	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getNome() {
		return this.nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getAltura() {
		return this.altura;
	}

	public void setAltura(int altura) {
		this.altura = altura;
	}

	public int getPeso() {
		return this.peso;
	}

	public void setPeso(int peso) {
		this.peso = peso;
	}

	public String getUniversidade() {
		return this.universidade;
	}

	public void setUniversidade(String universidade) {
		this.universidade = universidade;
	}

	public String getAnoNascimento() {
		return this.anoNascimento;
	}

	public void setAnoNascimento(String anoNascimento) {
		this.anoNascimento = anoNascimento;
	}

	public String getCidadeNascimento() {
		return this.cidadeNascimento;
	}

	public void setCidadeNascimento(String cidadeNascimento) {
		this.cidadeNascimento = cidadeNascimento;
	}

	public String getEstadoNascimento() {
		return this.estadoNascimento;
	}

	public void setEstadoNascimento(String estadoNascimento) {
		this.estadoNascimento = estadoNascimento;
    }
    
     //clone
	/*
	*clone
	*@param Personagem
	*@return Personagem
	*/
	public Jogador clone(Jogador a){
		return (new Jogador(a.id, a.nome, a.altura, a.peso,
			a.universidade, a.anoNascimento, a.cidadeNascimento, a.estadoNascimento));
	}

    //imprimir
	/*
	*imprimir
	*/
	public void imprimir(){
        MyIO.print(" ## "+this.id);
		MyIO.print(" ## "+this.nome);
		MyIO.print(" ## "+this.altura);
		if (this.peso%1==0)
			MyIO.print(" ## "+(int)this.peso);
		else
			MyIO.print(" ## "+this.peso);
		MyIO.print(" ## "+this.universidade);
		MyIO.print(" ## "+this.anoNascimento);
		MyIO.print(" ## "+this.cidadeNascimento);
		MyIO.print(" ## "+this.estadoNascimento);
		MyIO.println(" ## ");

    }
    
    //ler
	/*
	*ler
	*@return
	*/
	public String ler(){
		return( " ## "+this.id+" ## "+this.nome+" ## "+this.altura+
		       " ## "+this.peso+" ## "+this.universidade+" ## "+
		       this.anoNascimento+" ## "+this.cidadeNascimento+" ## "+this.estadoNascimento+" ## ");	
    }
    
    //metodos estaticos publicos

 //isFim
	/**
	*isFim - verifica FIM
	*@param String
	*@return boolean
	*/
	public static boolean isFim(String s){
		return (s.equals("FIM"));
	}

 //toIso
	/**
	*toIso - muda o encoding de uma String para ISO
	*@param String UTF-8
	*@return String ISO
	*/
	public static String toIso(String s) throws Exception{
		return (new String(s.getBytes("UTF-8"), "ISO-8859-1"));
	}

 //toUtf
	/**
	*toUtf - muda o encoding de uma String para UTF-8
	*@param String ISO
	*@return String UTF-8
	*/
	public static String toUtf(String s) throws Exception{
		return(new String(s.getBytes("ISO-8859-1"), "UTF-8"));
	}

 //parseJogador
	/**
	*parseJogador - Separa os atributos do jogador de uma String
	*@param String
	*@return String[]
	*/
	private static String[] parseJogador(String s){
		String[] dados = new String[8];

		int init = 0;
		int end = -1;
		
		for (int i=0; i<8; i++){
			init = s.indexOf("\'", end+1)+1;
			end = s.indexOf("\'", init);
			init = s.indexOf("\'", end+1)+1;
			end = s.indexOf("\'", init);
			dados[i] = s.substring(init, end);
		}
		return (dados);
	}
}

/**
*Classe Main
*/
public class main{
	
	/**
	*Metodo main
	*/
	public static void main(String[] args) throws Exception{

		Jogador p;
		String input = MyIO.readLine();
		input = Jogador.toUtf(input);
		while(!Jogador.isFim(input)){
			p = new Jogador(input);
			p.imprimir();
			input = MyIO.readLine();
			input = Jogador.toUtf(input);
		}	

	}	

    
}
}