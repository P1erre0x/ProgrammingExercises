namespace Ex04 {
    class Carro {
        int Velocidade;
        public float QualidadePneu = 100;

        public void Acelerar(int valor) {
            if (valor > 0) {
                if (VerificaQualidadePneu() == 0) {
                    QualidadePneu -= ((valor * 3) / 2);
                    Velocidade += valor;
                }
                else {
                    Console.WriteLine("BOX BOX BOX");
                }
            }
        }
        public int VerificaQualidadePneu() {
            if (QualidadePneu <= 25) {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
}
