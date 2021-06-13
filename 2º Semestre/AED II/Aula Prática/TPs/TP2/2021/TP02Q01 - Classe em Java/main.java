import java.time.*;
import java.lang.String;
import java.util.Scanner;
import java.io.File;

public class main {

    class Musica
    {
        //Atributos
        private String id;
        private String nome;
        private String key;
        private List artists;
        private Date realease_date;
        private double acousticness;
        private double danceability;
        private double energy;
        private int duration_ms;
        private double instrumentalness;
        private double valence;
        private int popularity;
        private float tempo;
		private double liveness;
        private double loudness;
        private double speechiness;
        private int year;
        

        Musica (String id, String nome, String key, List artists, Date realease_date,
		   double acousticness, double danceability, double energy, int duration_ms, 
		   double instrumentalness, double popularity, float tempo, double liveness,
 		   double loudness,double speechiness, int year){

        this.id = id;
		this.nome = nome;
		this.key = key;
		this.artists = artists;
		this.realease_date = realease_date;
		this.acousticness = acousticness;
		this.danceability = danceability;
		this.energy = energy;
		this.duration_ms = duration_ms;
		this.instrumentalness = instrumentalness;
		this.popularity = popularity;
		this.tempo = tempo;
		this.liveness = liveness
		this.loudness = loudness;
		this.speechiness = speechiness;
		this.year = year;
	}

	Musica(String musica){
		Arq.openRead("data.csv");
		String lida = Arq.readLine();
		Arq.close();

		String[] dados = parseMusica(lida);

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
	public Musica clone(Musica a){
		return (new Musica(a.id, a.nome, a.altura, a.peso,
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

 //parseMusica
	/**
	*parseMusica - Separa os atributos do Musica de uma String
	*@param String
	*@return String[]
	*/
	private static String[] parseMusica(String s){
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

		Musica p;
		String input = MyIO.readLine();
		input = Musica.toUtf(input);
		while(!Musica.isFim(input)){
			p = new Musica(input);
			p.imprimir();
			input = MyIO.readLine();
			input = Musica.toUtf(input);
		}

	}


}
}
