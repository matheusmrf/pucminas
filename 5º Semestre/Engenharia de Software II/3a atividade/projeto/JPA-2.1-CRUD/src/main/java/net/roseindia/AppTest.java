package net.roseindia;

import net.roseindia.model.*;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
		/*
		//Compile mvn compile
		//Run: mvn exec:java -Dexec.mainClass="net.roseindia.AppTest"
		
		*/
/**
* @author Deepak Kumar - ALTERADO POR SANDRO LAUDARES
* More tutorials at http://www.roseindia.net
*/
		
public class AppTest {

	private static final String PERSISTENCE_UNIT_NAME = "psunit1";
	private static EntityManagerFactory factory;

	public static void main(String[] args) {
		factory = Persistence.createEntityManagerFactory(PERSISTENCE_UNIT_NAME);

		// Gerenciador de entidades e' criado
		EntityManager em = factory.createEntityManager();

		em.getTransaction().begin();
		
		Contato c = new Contato();
		c.setNome("Maria ");
		c.setEndereco("RUA PPPP, 66");
		c.setTelefone("(31) 7777-6655");

		em.persist(c);
		em.getTransaction().commit();
		em.close();
		
	}
}
