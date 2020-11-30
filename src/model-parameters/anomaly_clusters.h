/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 1.8156143622670642, 1.379518080030842, 1.4231655770914586 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 2.8999203225314227, 1.826214037004051, 2.0917765623413533 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { -1.4461184740066528, -1.2098368406295776, -1.3562572002410889 }, 0.26063311206021234 }
, { { 0.7405779361724854, 0.29637274146080017, 0.9172342419624329 }, 0.35627639428020125 }
, { { 0.8474687337875366, 1.6353667974472046, 0.46927395462989807 }, 0.40307729383643814 }
, { { -1.1993643045425415, -1.1518490314483643, -1.175730586051941 }, 0.35057651062133566 }
, { { -1.582930564880371, -1.3158860206604004, -1.4593063592910767 }, 0.13855785482878832 }
, { { 0.4435262978076935, 0.1157253161072731, 0.20377731323242188 }, 0.32967861932072995 }
, { { 1.327769160270691, 0.9807029962539673, 1.3353519439697266 }, 0.3597066891127546 }
, { { 0.1918235719203949, -0.13412699103355408, 0.3328614830970764 }, 0.35048271282203874 }
, { { 0.6445022821426392, 1.371563196182251, 0.3823307752609253 }, 0.3802012166017825 }
, { { 0.562038004398346, 0.43941327929496765, 0.3093295395374298 }, 0.33504173426350614 }
, { { 0.928449809551239, 1.5050721168518066, 1.5094400644302368 }, 0.3974905103648737 }
, { { 0.5135969519615173, 0.21482186019420624, 0.8334999084472656 }, 0.28141326560203495 }
, { { 0.3623950481414795, 0.1772451400756836, 0.49581700563430786 }, 0.28689240100419816 }
, { { 0.5486423969268799, -0.04383315518498421, 0.9751547574996948 }, 0.323409182450601 }
, { { 0.8796980977058411, 1.0643614530563354, 0.45137184858322144 }, 0.42225782387987104 }
, { { 0.30981379747390747, -0.2077709585428238, 0.1036875769495964 }, 0.3140900214170465 }
, { { 0.8611168265342712, 1.1155459880828857, 1.0122506618499756 }, 0.3930276481457793 }
, { { 0.39276498556137085, 0.5637391805648804, -0.2484492063522339 }, 0.2602815362907867 }
, { { 0.8515375852584839, 0.6393405199050903, 0.7299544215202332 }, 0.28713737285655905 }
, { { 0.5850743651390076, -0.05834471806883812, 0.4797840416431427 }, 0.35514619381926893 }
, { { 0.9417654871940613, 0.012724081054329872, 0.35601916909217834 }, 0.38639619613752296 }
, { { 0.46747133135795593, 0.4762183129787445, 0.6161835789680481 }, 0.3635513452122428 }
, { { 1.2162731885910034, 1.4205604791641235, 0.7055519819259644 }, 0.3768602600442233 }
, { { 2.0000932216644287, 4.0153279304504395, 3.499704122543335 }, 0.3259526144331332 }
, { { 0.10041725635528564, -0.18654994666576385, 0.8034508228302002 }, 0.2995560885548159 }
, { { 0.23824946582317352, 0.32170382142066956, 0.3223263621330261 }, 0.3860109711409622 }
, { { -0.7952955961227417, -0.10615439713001251, -1.0433038473129272 }, 0.6933070979153106 }
, { { 0.8710588812828064, 0.35650402307510376, 0.36662527918815613 }, 0.38521325471935786 }
, { { 0.3135561943054199, 0.4773017466068268, 1.2233079671859741 }, 0.4299768031025217 }
, { { -0.7767231464385986, -0.7187712788581848, -0.6382220387458801 }, 0.2915504897901639 }
, { { 2.0140182971954346, 3.452316999435425, 3.248405933380127 }, 0.2982708910000641 }
, { { -0.011445868760347366, 0.2705211639404297, -0.2416006475687027 }, 0.16780395228976974 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
