# Problema Retângulo Máximo em Matriz Binária

## MAIN



Na main ocorre a leitura da matriz binária, que nesse caso é um
vetor de vetor de inteiro, e após isso a função solve é chamada e
recebe como parâmetro a matriz.






## SOLVE



Na função solve, é criado um vetor chamado altura para armazenar
quantos números 1 consecutivos existem na coluna. Para isso, a
matriz é percorrida novamente e quando a célula atual é o número
1, o vetor altura no índice j é incrementado em uma unidade. Caso
contrário, o vetor que armazena as alturas é zerado no índice j.
Após percorrer cada linha, é comparado, a variável “resposta” com
com o valor retornado pela função AreaRetangulo(altura). Essa
função recebe o vetor de alturas construído até a linha atual e
calcula a maior área retangular possível. A variável resposta
armazena a maior área encontrada entre todas as linhas da matriz









## AREARETANGULO

O objetivo dessa função é encontrar a maior área retangular
possível utilizando uma pilha. A pilha armazena os índices das
colunas e é mantida de forma que as alturas correspondentes a
esses índices estejam em ordem crescente. Caso a altura da
coluna atual seja menor ou igual ao valor da coluna que está no
topo da pilha, o índice do topo é removido e será usado como
altura para calcular a área do retângulo. A largura é calculada a
partir utilizando o índice da coluna atual e o índice da coluna que

ficou no topo. Caso a pilha esteja vazia durante o cálculo da
largura, esta terá como valor o índice atual, uma vez que não existe
nenhuma coluna menor que essa à esquerda. Após percorrer todas
as colunas, se ainda existir algum valor na pilha, o mesmo
processo será feito novamente. A única mudança é que caso a
pilha esteja vazia, a largura será igual ao número de colunas
indicando que o retângulo pode ocupar toda a extensão do
histograma.
