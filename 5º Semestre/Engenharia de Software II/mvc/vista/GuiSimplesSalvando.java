/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mvc.vista;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.io.IOException;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import mvc.vista.AlunoInexistenteException;
import mvc.controle.ControladorAlunoSerializado;
import mvc.controle.DreDuplicadoException;

public class GuiSimplesSalvando {
private String dre, nome, telefone, endereco;
private Date dataNasc;
private JFrame janela;
private JPanel painelGeral, pCentro, pDisplay, pDre, pNome, pTelefone, pEndereco, pDataNasc, pBotoes, pMensagem;
private JLabel labelDre, labelNome, labelTelefone, labelEndereco, labelDataNasc, labelMensagem;
private JButton botCriar, botObterNome, botSalvar, botLimpar;
private JTextField tfDre, tfNome, tfTelefone, tfEndereco, tfDataNasc, tfMensagem;
private ControladorAlunoSerializado controlador =
 ControladorAlunoSerializado.getControladorAlunoSerializado();
public GuiSimplesSalvando() {
janela = new JFrame("GUI Simples Persistente");
painelGeral = new JPanel(new BorderLayout());
pCentro = new JPanel(new BorderLayout());
pDisplay = new JPanel(new GridLayout(2,1));
pDre = new JPanel();
pNome = new JPanel();
pTelefone = new JPanel();
pEndereco = new JPanel();
pDataNasc = new JPanel();
pDre.setLayout(new FlowLayout(FlowLayout.LEFT));
pNome.setLayout(new FlowLayout(FlowLayout.LEFT));
pTelefone.setLayout(new FlowLayout(FlowLayout.LEFT));
pEndereco.setLayout(new FlowLayout(FlowLayout.LEFT));
pDataNasc.setLayout(new FlowLayout(FlowLayout.LEFT));
pDisplay.add(pDre);
pDisplay.add(pNome);
pDisplay.add(pTelefone);
pDisplay.add(pEndereco);
pDisplay.add(pDataNasc);
//DRE
labelDre = new JLabel("DRE: ");
pDre.add(labelDre);
tfDre = new JTextField(10);
tfDre.addKeyListener(new OuvinteTfDre());
pDre.add(tfDre);
//Nome
labelNome = new JLabel("Nome: ");
pNome.add(labelNome);
tfNome = new JTextField(30);
pNome.add(tfNome);
//Telefone
labelTelefone = new JLabel("Telefone: ");
pTelefone.add(labelTelefone);
tfTelefone = new JTextField(30);
pTelefone.add(tfTelefone);
//Endereco
labelEndereco = new JLabel("Endereco: ");
pEndereco.add(labelEndereco);
tfEndereco = new JTextField(30);
pEndereco.add(tfEndereco);
//Data Nascimento
labelDataNasc = new JLabel("Data de Nascimento: ");
pDataNasc.add(labelDataNasc);
tfDataNasc = new JTextField(30);
pDataNasc.add(tfDataNasc);
// Botões
pBotoes = new JPanel();
botCriar = new JButton("Criar Aluno");
botCriar.addActionListener(new OuvinteCriar());
pBotoes.add(botCriar);
botObterNome = new JButton("Obter nome");
botObterNome.addActionListener(new OuvinteObterNome());
pBotoes.add(botObterNome);
botSalvar = new JButton("Salvar dados");
botSalvar.addActionListener(new OuvinteSalvar());
pBotoes.add(botSalvar);
botLimpar = new JButton("Limpar dados");
botLimpar.addActionListener(new OuvinteLimpar());
pBotoes.add(botLimpar);
pMensagem = new JPanel();
labelMensagem = new JLabel("Mensagem: ");
tfMensagem = new JTextField(40);
tfMensagem.setEditable(false);
pMensagem.add(labelMensagem);
pMensagem.add(tfMensagem);
pMensagem.setLayout(new FlowLayout(FlowLayout.LEFT));
pCentro.add(pDisplay, BorderLayout.CENTER);
pCentro.add(pBotoes, BorderLayout.SOUTH);
painelGeral.add(pCentro, BorderLayout.CENTER);
painelGeral.add(pMensagem, BorderLayout.SOUTH);
janela.add(painelGeral);
janela.setBounds(0, 0, 600, 400);
janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
janela.setVisible(true);
try{
controlador.recuperarAlunos();
tfMensagem.setText("Os dados dos alunos foram recuperados do arquivo");
}
catch(IOException ioe){
tfMensagem.setText
 ("Não foi possível recuperar os dados dos alunos: IOException");
}
catch (ClassNotFoundException cnf){
tfMensagem.setText
 ("Não foi possível recuperar os dados dos alunos: ClassNotFoundException");
}
}
class OuvinteTfDre extends KeyAdapter{
@Override
public void keyTyped(KeyEvent ev){
tfMensagem.setText("");
tfNome.setText("");
}
}
class OuvinteCriar implements ActionListener {
@Override
public void actionPerformed(ActionEvent aev){
nome = tfNome.getText();
dre = tfDre.getText();
try{
controlador.criaAluno(dre, nome);
tfMensagem.setText("Aluno " + nome + " criado OK, com DRE " +
dre);
}
catch(DreDuplicadoException ex){
tfMensagem.setText
 ("Não foi possível criar o aluno. O DRE " + dre + " já foi alocado");
}
}
}
class OuvinteObterNome implements ActionListener {
@Override
public void actionPerformed(ActionEvent aev){
    try {
        dre = tfDre.getText();
        nome = controlador.getAluno(dre).getNome();
        telefone = controlador.get
        tfMensagem.setText("O aluno com DRE = " + dre + " chama-se " +
                nome + ", nasceu em: " + dataNasc + " reside em: " + endereco + " e seu telefone é: " + telefone);
    } catch (mvc.controle.AlunoInexistenteException ex) {
    }
}
}
class OuvinteSalvar implements ActionListener{
public void actionPerformed(ActionEvent aev){
try{
controlador.salvarAlunos();
tfMensagem.setText("Dados dos alunos salvos com sucesso");
}
catch (IOException ioe){
tfMensagem.setText
 ("Não foi possível salvar os dados dos alunos no arquivo");
}
}
}
class OuvinteLimpar implements ActionListener{
public void actionPerformed(ActionEvent aev){
controlador.limparDados();
}
}
public static void main(String[] args) {
new GuiSimplesSalvando();
}
}
