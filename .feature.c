#linguagem: pt

            Funcionalidade: Configurar produto
            Como cliente da EBAC-SHOP
            Quero Configurar meu produto de acordo com meu tamanho e gosto
            e escolher a quantidade
            Para depois inserir no carrinho



            Contexto:
            Dado que configure o produto na página do portal EBAC-SHOP



            Cenário: Configuração do produto válida
            Quando eu clicar o item "Augusta Pullover Jacket"
            E selecionar a cor rosa, tamanho G e quantidade 1 e clicar no carrinho
            Então deve exibir a mensagem adicionado ao carrinho

            Cenário: Configuração do produto inválida
            Quando eu clicar o item Augusta Pullover Jacket
            E selecionar a cor rosa e quantidade 1 e clicar no carrinho
            Então deve exibir a mensagem informe o tamanho

            Esquema do Cenário: Configuração de multiplos produtos
            Quando eu clicar no <"produto">
            E selecionar <cor>, <tamanho> e <quantidade>
            Então deve exibir a mensagem "adicionado ao carrinho"

            Exemplos:
            | Produto                 | cor    | quantidade | tamanho | Mensagem   |
            | Abominable Hoodie       | Blue   | 1          | M       | adicionado |
            | Arcadio Gym Short       | Red    | 2          | 36      | adicionado |
            | Autumn Pullie           | Green  | 1          | XL      | adicionado |
            | Augusta Pullover Jacket | Orange | 1          | L       | adicionado |
            
#linguagem: pt


            funcionalidade:
            Tela de cadastro - Checkout
            Como cliente da EBAC - SHOP
            Quero fazer concluir me cadastro
            Para finalizar minha compra

            Contexto:
            Dado que estou na tela inicial da loja ebac 

            Cenário: Cadastro valido de usuário
            Quando: Eu acesso o menu "Cadastrar usuário"
            Então: O sistema exibe a tela de "Cadastrar usuário"
            E: Eu preecho o campo Nome com o valor <usuário>
            E: Eu seleciono o perfil de usuário
            E: Eu preecho o campo Email com o valor <usuário>
            E: Eu clico no botão "Salvar"
            Então: o sistema exibe a mensagem 'Usuário cadastrado com sucesso'


            Esquema do Cenário: Preenchimento inválido
            Quando: eu digitar o <usuario>
            E: a <senha>
            E: não deve permitir campo e-mail com formato inválido. Sistema deve inserir uma mensagem de erro
            Então: Deve insirir um dos campos inválidos deve exibir uma <mensagem> de alerta "usuário ou senha inválidos"
            
        

          
                      



            