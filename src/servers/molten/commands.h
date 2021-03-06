
/**
 * @file /magma/servers/molten/commands.h
 *
 * @brief The data structure involved with parsing and routing Molten commands.
 *
 * $Author$
 * $Date$
 * $Revision$
 *
 */

#ifndef MAGMA_SERVERS_MOLTEN_COMMANDS_H
#define MAGMA_SERVERS_MOLTEN_COMMANDS_H

command_t molten_commands[] = {
		{
			.string = "QUIT",
			.length = 4,
			.function = &molten_quit
		},{
			.string = "STATS",
			.length = 5,
			.function = &molten_stats
		}
};

#endif
