
#include <string.h>
#include <stdlib.h>
#include <Foundation/Foundation.h>


@interface FFmpegExecute : NSObject

/**
 * Synchronously executes FFmpeg with arguments provided.
 *
 * @param arguments FFmpeg command options/arguments as string array
 * @return zero on successful execution, 255 on user cancel and non-zero on error
 */
+ (int)executeWithArguments:(NSArray*)arguments;

/**
 * Synchronously executes FFmpeg command provided. Space character is used to split command into arguments.
 *
 * @param command FFmpeg command
 * @return zero on successful execution, 255 on user cancel and non-zero on error
 */
+ (int)execute:(NSString*)command;

/**
 * Cancels an ongoing operation.
 *
 * This function does not wait for termination to complete and returns immediately.
 */
+ (void)cancel;

/**
 * Cancels an ongoing operation.
 *
 * This function does not wait for termination to complete and returns immediately.
 *
 * @param executionId execution id
 */
+ (void)cancel:(long)executionId;

/**
 * Parses the given command into arguments.
 *
 * @param command string command
 * @return array of arguments
 */
+ (NSArray*)parseArguments:(NSString*)command;

/**
 * <p>Combines arguments into a string.
 *
 * @param arguments arguments
 * @return string containing all arguments
 */
+ (NSString*)argumentsToString:(NSArray*)arguments;

/**
 * <p>Lists ongoing executions.
 *
 * @return list of ongoing executions
 */
+ (NSArray*)listExecutions;

@end