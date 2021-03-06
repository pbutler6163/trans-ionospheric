/*****************************************************************************
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 * 	@sconklin
 * 	@mustbeart
 * 	@abraxas3d
 *****************************************************************************/
#ifndef TRANSIO_LOG_H_
#define TRANSIO_LOG_H_

#define LOG_FILENAME	"QSOLOG.TXT"

extern void transio_log_screen();

// Add a record to the logfile, creating it if needed.
extern void logfile_add_record(char *record);

#endif /* TRANSIO_LOG_H_ */
