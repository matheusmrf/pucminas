import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;

public class Pessoa {
    // Campos de pessoas
    private boolean ativo;
    private String cpf; // Máximo de 9 bytes + 2 para o tamanho da string
    private String nome; // Máximo de 20 bytes + 2 para o tamanho da string
    private char sexo;
    private byte dia;
    private byte mes;
    private short ano;
    private String anotacoes;

    // Construtores
    public Pessoa() {
        this.cpf = "0";
        this.nome = null;
        this.sexo = ' ';
        this.anotacoes = "";
        this.ativo = true;
        this.dia = 0;
        this.mes = 0;
        this.ano = 0;
    }

    public Pessoa(Pessoa pessoa) {
        this.cpf = pessoa.cpf;
        this.nome = pessoa.nome;
        this.sexo = pessoa.sexo;
        this.anotacoes = pessoa.anotacoes;
        this.ativo = pessoa.ativo;
        this.dia = pessoa.dia;
        this.mes = pessoa.mes;
        this.ano = pessoa.ano;
    }

    public Pessoa(String cpf, String nome, char sexo, String anotacoes, byte dia, byte mes, short ano) {
        this.cpf = cpf;
        this.nome = nome;
        this.sexo = sexo;
        this.anotacoes = anotacoes;
        this.ativo = true;
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }

    // Getters e Setters
    public String getCpf() {
        return this.cpf;
    }

    public void setCpf(String cpf) {
        if (cpf.getBytes().length > 9) {
            cpf = cpf.substring(0, 8);
        }
        this.cpf = cpf;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        if (nome.getBytes().length > 20) {
            nome = nome.substring(0, 19);
        }
        this.nome = nome;
    }

    public char getSexo() {
        return this.sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public String getAnotacoes() {
        return this.anotacoes;
    }

    public void setAnotacoes(String anotacoes) {
        this.anotacoes = anotacoes;
    }

    public boolean isAtivo() {
        return this.ativo;
    }

    public void setAtivo(boolean ativo) {
        this.ativo = ativo;
    }

    public byte getDia() {
        return this.dia;
    }

    public void setDia(byte dia) {
        this.dia = dia;
    }

    public byte getMes() {
        return this.mes;
    }

    public void setMes(byte mes) {
        this.mes = mes;
    }

    public short getAno() {
        return this.ano;
    }

    public void setAno(short ano) {
        this.ano = ano;
    }

    // Métodos para manipulação de bytes
    public byte[] toByteArray() throws Exception {
        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        DataOutputStream dos = new DataOutputStream(baos);
        dos.writeBoolean(this.ativo);
        dos.writeUTF(this.cpf);
        dos.writeUTF(this.nome);
        dos.writeChar(this.sexo);
        dos.writeByte(this.dia);
        dos.writeByte(this.mes);
        dos.writeShort(this.ano);
        dos.writeUTF(this.anotacoes);

        return baos.toByteArray();
    }

    public void fromByteArray(byte[] b) throws Exception {
        ByteArrayInputStream bais = new ByteArrayInputStream(b);
        DataInputStream dis = new DataInputStream(bais);
        ativo = dis.readBoolean();
        cpf = dis.readUTF();
        nome = dis.readUTF();
        sexo = dis.readChar();
        dia = dis.readByte();
        mes = dis.readByte();
        ano = dis.readShort();
        anotacoes = dis.readUTF();
    }
}
