import java.io.File;
import java.io.RandomAccessFile;
import java.util.Scanner;

public class Main {
    // Declaração de ponteiros
    public static Scanner in = new Scanner(System.in);

    // Declarando o tamanho dos registros
    public static final int TAM_REG = 38; // Tamanho registro sem anotações
    public static final int TAM_CAB = 8; // Tamanho do cabeçalho

    public static void main(String[] args) {
        // Declaração de variáveis
        boolean quit = false;

        // Menu
        while (!quit) {
            System.out.println(String.format(
                    "MENU\n1. Criar Arquivo\n2. Inserir Registro\n3. Editar Registro\n4. Remover Registro\n5. Imprimir Registros\n0. Sair\n"));
            int e = in.nextInt();
            switch (e) {
                case 1:
                    criar();
                    break;
                case 2:
                    inserir();
                    break;
                case 3:
                    editar();
                    break;
                case 4:
                    remover();
                    break;
                case 5:
                    imprimir();
                    break;
                case 0:
                    quit = true;
                    break;
                default:
                    System.out.println("Opcao invalida.");
                    break;
            }
        }

        // Destruindo ponteiros
        in.close();
    }

    // Método de criação dos arquivos
    public static void criar() {
        try {
            File arq = new File("./arq.db");
            if (arq.exists()) { // Saber se o arquivo já existe
                throw new Exception();
            }
            arq.createNewFile();
            System.out.println("Numero de bytes por registro: ");
            int tamAnotacao = in.nextInt();

            RandomAccessFile raf = new RandomAccessFile("./arq.db", "rw");
            raf.seek(0);
            raf.writeInt(tamAnotacao);
            raf.close();
            System.out.println("Arquivo criado com sucesso.");
        } catch (Exception exc) {
            System.err.println("Houve um erro ao criar o arquivo: O arquivo já existe.");
        }
    }

    // Método de inserção de registros no arquivo
    public static void inserir() {
        int tamAnot; // Variável que armazena o tamanho da anotação do médico
        int nReg; // Variável que armazena o número de registros ativos no arquivo
        try {
            // Saber se o arquivo existe
            File arq = new File("./arq.db");
            if (!arq.exists()) {
                System.err.println("O arquivo não existe.");
                throw new Exception();
            }

            // Criando ponteiros
            RandomAccessFile raf = new RandomAccessFile(arq, "rw");
            Pessoa p = new Pessoa();

            // Lendo o cabeçalho
            raf.seek(0);
            tamAnot = raf.readInt();
            if (arq.length() == 4) {
                nReg = 0;
            } else {
                nReg = raf.readInt();
            }

            // Fomulário
            System.out.print("Nome: ");
            in.nextLine();
            p.setNome(in.nextLine());
            System.out.print("CPF: ");
            p.setCpf(in.nextLine());
            System.out.print("Sexo(m/f): ");
            p.setSexo(Character.toLowerCase(in.next().charAt(0)));
            System.out.println("Data de Nascimento => ");
            System.out.print("Dia: ");
            p.setDia(in.nextByte());
            System.out.print("Mes: ");
            p.setMes(in.nextByte());
            System.out.print("Ano: ");
            p.setAno(in.nextShort());

            // Encontrando próximo espaço liberado para inserção
            int proxEsp = nReg;
            for (int i = 0; i < nReg; i++) {
                raf.seek(TAM_CAB + (TAM_REG + tamAnot) * i);
                if (!raf.readBoolean()) {
                    proxEsp = i;
                    i = nReg;
                }
            }

            // Escrevendo no arquivo
            raf.seek((TAM_REG + tamAnot) * proxEsp + TAM_CAB);
            byte[] registro = new byte[TAM_REG + tamAnot];
            registro = p.toByteArray();
            raf.write(registro);

            // Atualizando o cabeçalho
            raf.seek(4);
            raf.writeInt(nReg + 1);

            // Destruindo ponteiros
            raf.close();

            System.out.println("Registro inserido com sucesso.");
        } catch (Exception exc) {
            System.err.println("Houve um erro ao inserir novo registro.");
        }
    }

    // Método de edição de registros no arquivo
    public static void editar() {
        int tamAnot; // Variável que armazena o tamanho da anotação do médico
        int nReg; // Variável que armazena o número de registros ativos no arquivo
        try {
            // Saber se o arquivo existe
            File arq = new File("./arq.db");
            if (!arq.exists()) {
                System.err.println("O arquivo não existe.");
                throw new Exception();
            }

            // Criando ponteiros
            RandomAccessFile raf = new RandomAccessFile(arq, "rw");

            // Lendo o cabeçalho
            raf.seek(0);
            tamAnot = raf.readInt();
            if (arq.length() == 4) {
                System.err.println("O arquivo está vazio.");
                raf.close();
                throw new Exception();
            } else {
                nReg = raf.readInt();
            }

            // Perguntando o CPF
            System.out.println("Digite o numero de CPF da pessoa que quer editar: ");
            in.nextLine();
            String cpfEdit = in.nextLine();

            // Encontrando o registro
            String cpfLido;
            boolean ativoLido;
            int registro = -1;
            raf.seek(TAM_CAB);
            for (int i = 0; i < nReg; i++) {
                raf.seek(TAM_CAB + (TAM_REG + tamAnot) * i);
                ativoLido = raf.readBoolean();
                cpfLido = raf.readUTF();
                if (cpfLido.equals(cpfEdit) && ativoLido) {
                    registro = i;
                    i = nReg;
                }
            }

            // Verificando se o CPF foi encontrado
            if (registro == -1) {
                System.err.println("Nao ha registro com esse CPF.");
                raf.close();
                throw new Exception();
            }

            // Alterando o registro de anotacoes
            System.out.println("Digite a nova anotacao medica da pessoa: ");
            String novaAnot = in.nextLine();
            // Verificando tamanho da nova anotação
            if (novaAnot.getBytes("UTF-8").length > tamAnot) {
                novaAnot = novaAnot.substring(0, tamAnot - 1);
            }
            // Posicionando ponteiro (devido ao cpf e nome serem strings, teremos que ler
            // todos os registros até chegar nas anotações)
            raf.seek(TAM_CAB + (TAM_REG + tamAnot) * registro);
            raf.readBoolean(); // Lendo ativo
            raf.readUTF(); // Lendo cpf
            raf.readUTF(); // Lendo nome
            raf.readChar(); // Lendo sexo
            raf.readByte(); // Lendo dia
            raf.readByte(); // Lendo mes
            raf.readShort(); // Lendo ano
            // Escrevendo nova anotação
            raf.writeUTF(novaAnot);

            // Destruindo ponteiros
            raf.close();

            System.out.println("Anotacao inserida com sucesso.");
        } catch (Exception exc) {
            System.err.println("Houve um erro ao editar o arquivo.");
        }
    }

    // Método de remoção de registros no arquivo
    public static void remover() {
        int tamAnot; // Variável que armazena o tamanho da anotação do médico
        int nReg; // Variável que armazena o número de registros ativos no arquivo
        try {
            // Saber se o arquivo existe
            File arq = new File("./arq.db");
            if (!arq.exists()) {
                System.err.println("O arquivo não existe.");
                throw new Exception();
            }

            // Criando ponteiros
            RandomAccessFile raf = new RandomAccessFile(arq, "rw");

            // Lendo o cabeçalho
            raf.seek(0);
            tamAnot = raf.readInt();
            if (arq.length() == 4) {
                System.err.println("O arquivo está vazio.");
                raf.close();
                throw new Exception();
            } else {
                nReg = raf.readInt();
            }

            // Perguntando o CPF
            System.out.println("Digite o numero de CPF da pessoa que quer apagar: ");
            in.nextLine();
            String cpfEdit = in.nextLine();

            // Encontrando o registro
            String cpfLido;
            boolean ativoLido;
            int registro = -1;
            raf.seek(TAM_CAB);
            for (int i = 0; i < nReg; i++) {
                raf.seek(TAM_CAB + (TAM_REG + tamAnot) * i);
                ativoLido = raf.readBoolean();
                cpfLido = raf.readUTF();
                if (cpfLido.equals(cpfEdit) && ativoLido) {
                    registro = i;
                    i = nReg;
                }
            }

            // Verificando se o CPF foi encontrado
            if (registro == -1) {
                System.err.println("Nao ha registro com esse CPF.");
                raf.close();
                throw new Exception();
            }

            // Apagando registro
            raf.seek(TAM_CAB + (TAM_REG + tamAnot) * registro);
            raf.writeBoolean(false);

            // Atualizando cabeçalho
            raf.seek(4);
            raf.writeInt(nReg - 1);

            // Destruindo ponteiros
            raf.close();

            System.out.println("Apagado com sucesso.");
        } catch (Exception exc) {
            System.err.println("Houve um erro ao apagar o registro.");
        }
    }

    // Método de impressão de registros no arquivo
    public static void imprimir() {
        int tamAnot; // Variável que armazena o tamanho da anotação do médico
        int nReg; // Variável que armazena o número de registros ativos no arquivo
        try {
            // Saber se o arquivo existe
            File arq = new File("./arq.db");
            if (!arq.exists()) {
                System.err.println("O arquivo não existe.");
                throw new Exception();
            }

            // Criando ponteiros
            RandomAccessFile raf = new RandomAccessFile(arq, "rw");

            // Lendo o cabeçalho
            raf.seek(0);
            tamAnot = raf.readInt();
            if (arq.length() == 4) {
                System.err.println("O arquivo está vazio.");
                raf.close();
                throw new Exception();
            } else {
                nReg = raf.readInt();
            }

            // Imprimindo registros
            raf.seek(4);
            System.out.println("=============== arq.db ==============");
            System.out.println("Numero de registros: " + raf.readInt());
            System.out.println("Registros: ");
            int impressos = nReg; // Variável para armazenar a quantidade de registros já impressos
            int i = 0; // Variável de incremento
            while (impressos > 0) {
                raf.seek(TAM_CAB + (TAM_REG + tamAnot) * i);
                if (raf.readBoolean()) {
                    System.out.println();
                    System.out.println("CPF: " + raf.readUTF());
                    System.out.println("Nome: " + raf.readUTF());
                    System.out.println("Sexo: " + raf.readChar());
                    System.out.println(
                            "Data de nascimento: " + raf.readByte() + "/" + raf.readByte() + "/" + raf.readShort());
                    System.out.println("Anotacoes medicas: " + raf.readUTF());
                    impressos--;
                }
                i++;
            }
            System.out.println("=====================================");

            // Destruindo ponteiros
            raf.close();
        } catch (Exception exc) {
            System.err.println("Houve um erro ao imprimir os registros.");
        }
    }
}
