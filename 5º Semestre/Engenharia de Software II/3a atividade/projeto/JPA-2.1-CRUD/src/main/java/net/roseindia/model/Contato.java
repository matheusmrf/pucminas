package net.roseindia.model;

import javax.persistence.*;

/**
* @author Deepak Kumar
* More tutorials at http://www.roseindia.net
*/

@Entity
@Table(name="CONTATO")
public class Contato {
	

	@Column(name="nome")
	private String Nome;
	
	@Column(name="endereco")
	private String Endereco;
	
	@Column(name="telefone")
	private String Telefone;
	
	@Column(name="codigo")
	@Id @GeneratedValue int Codigo;

	public int getCodigo() {
		return Codigo;
	}

	public void setCodigo(int id) {
		this.Codigo = id;

	}

	public String getNome() {
		return Nome;
	}

	public void setNome(String nome) {
		this.Nome = nome;
	}

	public String getEndereco() {
		return Endereco;
	}

	public void setEndereco(String endereco) {
		this.Endereco = endereco;
	}

	public String getTelefone() {
		return Telefone;
	}

	public void setTelefone(String telefone) {
		this.Telefone = telefone;
	}


	

}
