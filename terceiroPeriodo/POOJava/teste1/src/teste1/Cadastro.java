package teste1;
import java.util.Scanner;
public class Cadastro {
	
	public static void main(String[] args) {
		Aluno pessoa1 = new Aluno();
		Scanner scan = new Scanner(System.in);
		System.out.println("insira o nome");
		pessoa1.nome = scan.nextLine();
		System.out.println("insira a idade");
		pessoa1.idade = scan.nextInt();
		System.out.println("O " + pessoa1.nome + " tem " + pessoa1.idade + " anos de idade\n");
	}
	
}
