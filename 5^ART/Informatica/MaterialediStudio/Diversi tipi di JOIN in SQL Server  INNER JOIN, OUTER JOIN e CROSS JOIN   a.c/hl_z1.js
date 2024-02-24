var iki_hl = new Array(
['https://www.mrwcorsi.it','mrwcorsi.jpg','Corsi di informatica on-line','E-Learning con tutor online ed attestato finale. Iscriviti subito ai corsi!'],
['https://adv.mrwebmaster.it/adclick.php?s=1&a=91','seg24.jpg','Segretaria 24h/24. Prova GRATIS','Risparmia il 90% dei costi fissi del tuo ufficio utilizzando una segretaria virtuale.'],
['https://www.siteground.it/hosting-wordpress?afcode=16c466d13b4f12ac2fd4f92b107cfed4','siteground.jpg','Cerchi un hosting per WordPress?','Prova SiteGround e ti innamorerai. Super veloce, facile e sicuro.'],
['https://adv.mrwebmaster.it/adclick.php?s=1&a=91','seg24.jpg','Segretaria da 39 euro al mese','Risposta al telefono, agenda appuntamenti e fax virtuale. Anche 24h al giorno.']);
if (iki_hl.length > 0) iki_hl.sort(function(){ return Math.random()-0.5; });
function ikihls_show(elem,w,c,r,mr,mb) {
c = c || 1;
r = r || 3;
mr = mr || 0;
mb = mb || 0;
var iki_hl_html = '';
var iki_hl_max = parseInt(c*r);
var iki_hl_len = iki_hl.length;
if (iki_hl_max > iki_hl_len) iki_hl_max = iki_hl_len;
if (iki_hl_max > 0) {
var iki_hl_cnt = 0;
for (var i = 0; i < iki_hl_max; i++) {
if (c > 1 && iki_hl_cnt == c) {
iki_hl_html += '<div style="clear: both; height: 0;"></div>';
iki_hl_cnt = 1;
} else iki_hl_cnt++;
iki_hl_html += '<div style="position: relative; width:' + w + 'px; min-height: 60px; cursor: pointer;' + (c > 1 ? ' float: left;' : '') + (mr > 0 && iki_hl_cnt != c ? ' margin-right: ' + mr + 'px;': '') + (mb > 0 ? ' margin-bottom: ' + mb + 'px;' : '') + '" onclick="window.open(\'' + iki_hl[i][0] + '\')">';
iki_hl_html += '<img border="0" src="https://adv.mrwebmaster.it/ico60/' + iki_hl[i][1] + '" style="position: absolute; top: 0; left: 0;"/>';
iki_hl_html += '<div style="margin-left: 65px;"><span class="ikihl_tit">' + iki_hl[i][2] + '</span><span class="ikihl_txt">' + iki_hl[i][3] + '</span></div>';
iki_hl_html += '</div>';
}
if (c > 1) iki_hl_html += '<div style="clear: both; height: 0;"></div>';
document.getElementById(elem).innerHTML = iki_hl_html;
iki_hl.splice(0, iki_hl_max);
}
}
while (_ikihls.length > 0) { (_ikihls.shift())(); }