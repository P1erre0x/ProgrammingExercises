namespace Ex09 {
    class Aluno : Pessoa{
        public int Matricula;

        public Aluno(string nome, int idade, int matricula) : base(nome,idade) {
            Matricula = matricula; 
        }
    }
}
