import java.util.Date;
import java.text.SimpleDateFormat;
import java.text.DateFormat;

class Musica {
    //----------------------------------------------------- Atributos -----------------------------------------------------
    private String id = "";
    private String nome = "";
    private String key = "";
    private String artists = "";
    private Date realease_date = new Date();
    private double acousticness = 0.0;
    private double danceability = 0.0;
    private double energy = 0.0;
    private int duration_ms = 0;
    private double instrumentalness = 0.0;
    private double valence = 0.0;
    private int popularity = 0;
    private float tempo = 0.0f;
    private double liveness = 0.0;
    private double loudness = 0.0;
    private double speechiness = 0.0;
    private int year = 0;

    //----------------------------------------------------- Metodos Especiais -----------------------------------------------------
    public Musica() {
        //Padrao
    }

    public Musica(String id, String nome, String key, String artists, Date realease_date, double acousticness, double danceability, double energy, int duration_ms, double instrumentalness, double valence, int popularity, float tempo, double liveness, double loudness, double speechiness, int year) {
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
        this.valence = valence;
        this.popularity = popularity;
        this.tempo = tempo;
        this.liveness = liveness;
        this.loudness = loudness;
        this.speechiness = speechiness;
        this.year = year;
    }

    public Musica clone() {
        Musica m1 = new Musica(this.id, this.nome, this.key, this.artists, this.realease_date, this.acousticness, this.danceability, this.energy, this.duration_ms, this.instrumentalness, this.valence, this.popularity, this.tempo, this.liveness, this.loudness, this.speechiness, this.year);
        return m1;
    }

    public String getId() {
        return this.id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getKey() {
        return this.key;
    }

    public void setKey(String key) {
        this.key = key;
    }

    public String getArtists() {
        return this.artists;
    }

    public void setArtists(String artists) {
        this.artists = artists;
    }

    public String getRealeaseDate() {
        SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
        String strDate = formatter.format(this.realease_date);
        return strDate;
    }

    public void setRealeaseDate(String realease_date) {
        try {
            DateFormat formatUS = new SimpleDateFormat("yyyy-MM-dd");
            Date date = formatUS.parse(realease_date);

            SimpleDateFormat formatter = new SimpleDateFormat("MM/dd/yyyy");
            String strDate = formatter.format(date);

            DateFormat formatBR2 = new SimpleDateFormat("MM/dd/yyyy");
            Date newDate = formatBR2.parse(strDate);

            this.realease_date = newDate;
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public double getAcousticness() {
        return this.acousticness;
    }

    public void setAcousticnecc(double acousticness) {
        this.acousticness = acousticness;
    }

    public double getDanceability() {
        return this.danceability;
    }

    public void setDanceability(double danceability) {
        this.danceability = danceability;
    }

    public double getEnergy() {
        return this.energy;
    }

    public void setEnergy(double energy) {
        this.energy = energy;
    }

    public int getDurationMs() {
        return this.duration_ms;
    }

    public void setDurationMs(int duration_ms) {
        this.duration_ms = duration_ms;
    }

    public double getInstrumentalness() {
        return this.instrumentalness;
    }

    public void setInstrumentalness(double instrumentalness) {
        this.instrumentalness = instrumentalness;
    }

    public double getValence() {
        return this.valence;
    }

    public void setValence(double valence) {
        this.valence = valence;
    }

    public int getPopularity() {
        return this.popularity;
    }

    public void setPopularity(int popularity) {
        this.popularity = popularity;
    }

    public float getTempo() {
        return this.tempo;
    }

    public void setTempo(float tempo) {
        this.tempo = tempo;
    }

    public double getLiveness() {
        return this.liveness;
    }

    public void setLiveness(double liveness) {
        this.liveness = liveness;
    }

    public double getLoudness() {
        return this.loudness;
    }

    public void setLoudness(double loudness) {
        this.loudness = loudness;
    }

    public double getSpeechiness() {
        return this.speechiness;
    }

    public void setSpeechiness(double speechiness) {
        this.speechiness = speechiness;
    }

    public int getYear() {
        return this.year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    //----------------------------------------------------- Funcoes e Metodos -----------------------------------------------------
    public void imprimir() {
        MyIO.println(id + " ## " + getArtists() + " ## " + nome + " ## " + getRealeaseDate() + " ## " + acousticness + " ## " + danceability + " ## " + instrumentalness + " ## " + liveness + " ## " + loudness + " ## " + speechiness + " ## " + energy + " ## " + duration_ms);
    }

    public boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public void ler(String[] data) {
        id = data[8];
        setNome(data[14].replace("\"", ""));
        key = data[10];
        setArtists(data[3].replace("\'", "").replace("\"", ""));
        if (data[16].length() < 8){
            String temp = data[16];
            temp = temp + "-01-01";

            data[16] = temp;
            setRealeaseDate(data[16]);
        } else {
            setRealeaseDate(data[16]);
        }
        acousticness = Double.parseDouble(data[2]);
        danceability = Double.parseDouble(data[4]);
        energy = Double.parseDouble(data[6]);
        duration_ms = Integer.parseInt(data[5]);
        instrumentalness = Double.parseDouble(data[9]);
        valence = Double.parseDouble(data[0]);
        popularity = Integer.parseInt(data[15]);
        tempo = Float.parseFloat(data[18]);
        liveness = Double.parseDouble(data[11]);
        loudness = Double.parseDouble(data[12]);
        speechiness = Double.parseDouble(data[17]);
        year = Integer.parseInt(data[1]);
    }
}

class Tempo {
    //Atributos
    private double time;

    //Metodos especiais
    public Tempo() {
        this.time = 0.0;
    }

    public double getTime() {
        return this.time;
    }

    public void setTime(double time) {
        this.time = time;
    }

    //Metodos
    public void start() {
        time = new Date().getTime();
    }

    public void stop() {
        time = ((new Date().getTime()) - time)/1000;
    }
}

class Celula {
    // Atributos
    public Musica elemento;
    public Celula prox;

    // Metodos especiais
    public Celula() {
        this.elemento = new Musica();
    }

    public Celula(Musica x) {
        this.elemento = x;
        this.prox = null;
    }
}

class CelulaDupla {
    // Atributos
    public Musica elemento;
    public CelulaDupla ant;
    public CelulaDupla prox;

    // Metodos especiais
    public CelulaDupla() {

    }

    public CelulaDupla(Musica elemento) {
        this.elemento = elemento;
        this.ant = null;
        this.prox = null;
    }
}

class No {
    // Atributos
    public Musica elemento;
    public No esq;
    public No dir;

    // Metodos Especiais
    public No() {
        this.elemento = new Musica();
        this.esq = null;
        this.dir = null;
    }

    public No(Musica elemento) {
        this.elemento = elemento;
        this.esq = null;
        this.dir = null;
    }

    public No(Musica elemento, No esq, No dir) {
        this.elemento = elemento;
        this.esq = esq;
        this.dir = dir;
    }
}

class ArvoreBinaria {
    // Atributos
    No raiz;

    // Metodos especiais
    public ArvoreBinaria() {
        raiz = null;
    }

    // Inserir um elemento na arvore
    public void inserir(Musica elemento) throws Exception {
        raiz = inserir(elemento, raiz);
    }

    public No inserir(Musica elemento, No no) throws Exception {
        if (no == null) {
            no = new No(elemento);
        } else if (elemento.getId().compareTo(no.elemento.getId()) < 0) { // Pode ter erro aqui, pq o no.elemento.getid pode estar vazio ja que nao inicializei ele
            no.esq = inserir(elemento, no.esq);
        } else if (elemento.getId().compareTo(no.elemento.getId()) > 0) {
            no.dir = inserir(elemento, no.dir);
        } else {
            throw new Exception("Erro ao tentar inserir uma musica na arvore, elemento repetido");
        }

        return no;
    }

    // Pesquisar um valor na arvore e retornar true se ele existir
    public boolean pesquisar(String elemento) {
        return pesquisar(elemento, raiz);
    }

    public boolean pesquisar(String elemento, No no) {
        boolean resp;

        comparisons++;
        if (no == null) {
            resp = false;
        } else if (elemento.compareTo(no.elemento.getId()) == 0) {
            comparisons = comparisons + 1;
            resp = true;
        } else if (elemento.compareTo(no.elemento.getId()) < 0) {
            comparisons = comparisons + 2;
            resp = pesquisar(elemento, no.esq);
        } else {
            comparisons = comparisons + 2;
            resp = pesquisar(elemento, no.dir);
        }

        return resp;
    }

    // Caminhar pela estrutura de arvore
    public void caminharPre(No no) {
        if (no != null) {
            MyIO.println(no.elemento.getId());
            caminharPre(no.esq);
            caminharPre(no.dir);
        }
    }

    // Retorna a altura da arvore
    public int getAltura() {
        int altura = 0;
        return getAltura(raiz, altura);
    }

    public int getAltura(No no, int altura) {
        if (no == null) {
            altura--;
        } else {
            int alturaEsq = getAltura(no.esq, altura + 1);
            int alturaDir = getAltura(no.dir, altura + 1);
            altura = (alturaEsq > alturaDir) ? alturaEsq : alturaDir;
        }

        return altura;
    }
}

public class TP04Q01 {
    //Variaveis globais
    final static int tamanho = 170653;
    static int comparisons = 0;
    static int moves = 0;

    //Criar todos os objetos do tipo Musica
    public static Musica[] createAllObject() {
        String data = "";
        String[] dataTreated = new String[20];
        Musica[] m = new Musica[tamanho];
        int i = 0;
        Arq.openRead("data.csv", "UTF-8");

        data = Arq.readLine();

        while (Arq.hasNext()) {
            data = "";
            data = Arq.readLine();
            dataTreated = processData(data);
            m[i] = new Musica();
            m[i].ler(dataTreated);
            i++;
        }

        Arq.close();

        return m;
    }

    //Verificar se a linha lida e igual a FIM
    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //Tratar os dados, de modo que o return seja um array de string com todos os atributos separados
    public static String[] processData(String data) {
        String resp[] = new String[20];


        resp = data.split(",(?=(?:[^\"]*\"[^\"]*\")*[^\"]*$)");
        return resp;
    }

    //Buscar os ids no arquivo, e imprimir seus dados caso encontrado
    public static void searchIdInFile(String[] id, int numEntrada) {
        Musica[] m = new Musica[tamanho];
        Musica[] result = new Musica[100];
        int w = 0;
        m = createAllObject();

        for (int k = 0; k < numEntrada; k++) {
            for (int j = 0; j < tamanho; j++) {
                try {
                    if (m[j].getId().equals((id[k]))) {
                        m[j].imprimir();
                    }
                } catch (Exception e) {

                }
            }
        }


        Arq.close();
    }

    //Buscar os ids no arquivo, e retornar o dado caso encontrado
    public static Musica[] searchIdInReturnArrayMusic(String[] id, int numEntrada) {
        Musica[] m = new Musica[tamanho];
        Musica[] result = new Musica[numEntrada];
        m = createAllObject();
        int w = 0;

        for (int k = 0; k < numEntrada; k++) {
            for (int j = 0; j < tamanho; j++) {
                try {
                    if (m[j].getId().equals((id[k]))) {
                        result[w] = m[j];
                        w++;
                    }
                } catch (Exception e) {

                }
            }
        }

        return result;
    }

    //Criar o log
    public static void createLog(Tempo tempo, int comparacoes, int movimentos) {
        Arq.openWrite("matricula_arvoreBinaria.txt");

        Arq.println("Matricula: 669742\tTempo: " + tempo.getTime() + "\tComparacoes: " + comparacoes + "\tMovimentacoes: " + movimentos);

        Arq.close();
    }

    //Procurar uma musica
    public static Musica procurarUmaMusica(Musica[] musica, String id) {
        Musica music = new Musica();
        boolean achou = false;

        for (int j = 0; j < tamanho && achou == false; j++) {
            try {
                if (musica[j].getId().equals((id))) {
                    music = musica[j].clone();
                    achou = true;
                }
            } catch (Exception e) {

            }
        }

        return music;
    }

    //Buscar os ids no arquivo, e retornar as musicas encontradas correspondentes aos ids
    public static ArvoreBinaria searchIdInReturnBinaryTree(Musica[] musica, ArvoreBinaria arvore, String[] id, int numEntrada) {
        boolean achou = false;
        int w = 0;

        for (int k = 0; k < numEntrada; k++) {
            comparisons++;
            for (int j = 0; j < tamanho && achou == false; j++) {
                comparisons++;
                try {
                    comparisons++;
                    if (musica[j].getId().equals((id[k]))) {
                        arvore.inserir(musica[j]);
                        achou = true;
                    }
                } catch (Exception e) {

                }
            }
            achou = false;
        }

        return arvore;
    }

    public static void main(String[] args) throws Exception {
        //iniciar o temporizador
        Tempo time = new Tempo();

        //Declarando variaveis
        MyIO.setCharset("UTF-8");
        String[] entrada = new String[1000];
        String[] segundaEntrada = new String[26];
        Musica[] m = new Musica[tamanho];
        m = createAllObject();
        int i = -1;
        int j = -1;
        int quantidade = 0;
        int contador = 0;

        //Lendo a primeira parte da entrada
        do {
            i++;
            entrada[i] = "";
            entrada[i] = MyIO.readString();
        } while (!isFim(entrada[i]));

        //Lendo a segunda parte da entrada
        do {
            j++;
            segundaEntrada[j] = "";
            segundaEntrada[j] = MyIO.readString();
        } while (!isFim(segundaEntrada[j]));

        //Declarando a lista dupla
        ArvoreBinaria music = new ArvoreBinaria();

        //Iniciar o relogio
        time.start();

        //Criar as musicas pedidas
        music = searchIdInReturnBinaryTree(m, music, entrada, i);

        for (int k = 0; k < j; k++) {
            if (music.pesquisar(segundaEntrada[k]) == true) {
                MyIO.println("SIM");
            } else {
                MyIO.println("NAO");
            }
        }

        //Receber o numero de comparacoes
        comparisons = music.comparacoes();

        //Receber o numero de movimentacoes
        moves = music.moves();

        ////Parar o temporizador e fazer o log
        time.stop();
        createLog(time, comparisons, moves);
    }
}
