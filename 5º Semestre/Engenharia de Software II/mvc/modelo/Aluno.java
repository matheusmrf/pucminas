/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mvc.modelo;

import java.util.Date;

public class Aluno implements java.io.Serializable{
private static final long serialVersionUID = 1L;
private String dre;
private String nome;

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public Date getData_Nasc() {
        return Data_Nasc;
    }

    public void setData_Nasc(Date data_Nasc) {
        Data_Nasc = data_Nasc;
    }

private String telefone;
private String endereco;
private Date Data_Nasc;
public Aluno(String dre, String nome) {
super();
this.dre = dre;
this.nome = nome;
}
public String getDre() {
return dre;
}
public void setDre(String dre) {
this.dre = dre;
}
public String getNome() {
return nome;
}
public void setNome(String nome) {
this.nome = nome;
}
}

