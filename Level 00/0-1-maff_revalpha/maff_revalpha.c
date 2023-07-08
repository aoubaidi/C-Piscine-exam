/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:30:57 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/14 12:30:58 by fwuensch         ###   ########.fr       */
/*   Updated: 2023/07/08 17:49:20 by aoubaidi                                 */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc,char *argv[])
{
	int i=90;
	char c;
	while(i>64){
		if(i%2){
			c=i;
		}
		else c=i+32;
		write(1,&c,1);
		i--;
	}
	write(1,"\n",1);
	return (0);
}
