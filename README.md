# test_42libft (Beta)
Programme test du projet "Libft" de l'école 42.
***
### TRUCS IMPORTANTS:

Attention ce programme est encore en Beta, je ne l'ai pas fini car je n'ai pas fini la libft

Ce programme est fait pour être compilé sous MacOS, sur linux il ne fonctionnera pas.

Ce programme est fait pour pouvoir tester les fonctions pendant qu'on fait la libft, il faut donc que vous mettiez en commentaire dans le Makefile les fonctions que vous n'avez pas deja codé.

## Comment ca marche?
Tout votre fichier libft du git de 42 doit etre mit dans le fichier ft, puis il faut 'make' votre libft et apres tout fonctionnera, mon projet est dans ft par defaut

Il y a quatre arguments utilisables avec libtest:

./libtest only X: Ne test que les fonctions X ("bonus" permet de ne tester que les fonctions des bonus)

./libtest without X: Test tout saud les fonctions X ("bonus" permet de ne pas tester les bonus)

./libtest all: Test tout

./libtest help: Affiche une petite page d'aide

Il est possible d'ajouter "detail" en argument supplementaire des 2 premiers exemples pour avoir les details des test effectues.
***
Bug connus:

putstr_fd et substr ne sont pas 100% surs

split ne marche pas (sois ma fonction sois mon test

strtrim crash une fois sur deux, faites donc un without strtrim quoi qu'il arrive

***
Ce programme est toujours en cours de developpement, il manque des test et il poeut buguer. Si vous pouvez me faire des retours sur les bugs qu'il y a, des tests qui seraient bien d'ajouter ou simplement une idée pour ameliorer le tout n'hesitez pas a me contacter!

Intra: nguiard  Discord: Jenos#6266
