
                                                                                                                        
                              TRABALHO PRATICO PROGRAMACAO ORIENTADA A OBJETOS 1                                        
                                                                                                                        
        PAULO CESAR RABELO MARTINS                                                                                                    
        WENDELL RESENDE DOS SANTOS                                                                                      
                                                                                                                        
        ERIC DE PAULA FERREIRA                                                                                          
                                                                                                                        
        ENGENHARIA DA COMPUTACAO                                                                                        
        4 PERIODO - NOTURNO                                                                                             
                                                                                                                        
                                                                                                                        
                                                                                                                        
 O programa que desenvolvemos como trabalho final de POO 1, e um sistema de acervo de biblioteca.                        
 A classe principal e "Biblioteca", que possui diversas subclasses, "Jornal", "Revista", "Livro", "Cartaz", "Mapa",      
 "Periodico", "Relatorio" e tambem "Trabalho de Conclusao" superclasse de (Dissertacao, Monografia e Tese) e "Midia",   
 (sendo mae de "CD", "DVD" e "Fita").                                                                                   
                                                                                                                         
 Utilizando conceitos de polimorfismo, implementamos operacoes basicas do CRUD (Criar, Remover, Atualizar, Deletar)      
 para manipular itens na biblioteca. Os dados desses itens sao impressos de maneira polimorfica, mostrando todos         
 os atributos de cada item.                                                                                              
                                                                                                                         
 Alem disso, o programa inclui um sistema de cadastro de alunos, permitindo que eles acessem a biblioteca atraves        
 de matricula e senha (CPF). Os alunos podem realizar operacoes no acervo, incluindo emprestimos de livros.              
                                                                                                                         
 O sistema de emprestimo e semelhante a um banco de dados, onde a classe "Emprestimo" mantem registros associando        
 alunos aos itens emprestados. O uso de ponteiros e dynamic_cast e essencial para essa funcionalidade.                   
                                                                                                                         
 Ao realizar um emprestimo, o sistema calcula automaticamente a data de devolucao (15 dias apos o emprestimo) e a exibe  
 para o usuario. Os alunos tambem podem visualizar os itens que tem em sua posse, proporcionando uma experiencia         
 completa no gerenciamento do acervo.                                                                                    
                                                                                                                         
 Em resumo, o programa e uma aplicacao solida que utiliza os principios de POO para criar e gerenciar um acervo          
 de biblioteca, proporcionando aos alunos a capacidade de interagir de maneira eficiente com o sistema.                  
                                                                                                                         
--------------------------------------------------------------------------------------------------------------------------
