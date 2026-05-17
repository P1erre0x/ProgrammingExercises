namespace Ex09 {
    class Program {
        static void Main() {
            List<Pessoa> Pessoas = new List<Pessoa>();
            Pessoas.Add(new Pessoa("Pedro",20));
            Pessoas.Add(new Aluno("Caua Mogged", 19, 192481293));
            Pessoas.Add(new Aluno("Autista Desmogged", 90, 9129310));
            foreach (var Pessoa in Pessoas) {
                if (Pessoa is Aluno aluno) {
                    Console.WriteLine($"{aluno.Nome},{aluno.Idade},{aluno.Matricula}");
                }
                else {
                    Console.WriteLine($"{Pessoa.Nome},{Pessoa.Idade}");
                }
            }
        }
    }
}