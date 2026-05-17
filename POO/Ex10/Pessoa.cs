namespace Ex10 {
    class Pessoa {
        private int _idade;
        private string _nome;

        public Pessoa(int idade, string nome) {
            Nome = nome;

        }

        public int Idade {
            get { return Idade; }
            set {
                if (value > 0) {
                    _idade = value;
                }
            }
        }
        public string Nome {
            get { return _nome; }
        }
    }
}
