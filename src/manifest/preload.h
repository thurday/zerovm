/*
 * preload given file to channel
 * note: with this class we make paging engine
 *
 *  Created on: Dec 5, 2011
 *      Author: d'b
 */

#ifndef PRELOAD_H_
#define PRELOAD_H_

#define CHANNEL_OPEN_FLAGS {O_RDONLY, O_RDWR | O_CREAT, O_RDWR | O_CREAT, -1, -1}

/*
 * preload given file to channel.
 * return 0 if success, otherwise negative errcode
 */
int PreloadChannel(struct NaClApp *nap, struct ChannelDesc* channel);

#endif /* PRELOAD_H_ */
