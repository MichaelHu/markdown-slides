var Reveal=function(){"use strict";function e(e){if(t(),!an.transforms2d&&!an.transforms3d)return void document.body.setAttribute("class","no-transforms");window.addEventListener("load",x,!1);var r=Reveal.getQueryHash();"undefined"!=typeof r.dependencies&&delete r.dependencies,d(Jt,e),d(Jt,r),m(),n()}function t(){an.transforms3d="WebkitPerspective"in document.body.style||"MozPerspective"in document.body.style||"msPerspective"in document.body.style||"OPerspective"in document.body.style||"perspective"in document.body.style,an.transforms2d="WebkitTransform"in document.body.style||"MozTransform"in document.body.style||"msTransform"in document.body.style||"OTransform"in document.body.style||"transform"in document.body.style,an.requestAnimationFrameMethod=window.requestAnimationFrame||window.webkitRequestAnimationFrame||window.mozRequestAnimationFrame,an.requestAnimationFrame="function"==typeof an.requestAnimationFrameMethod,an.canvas=!!document.createElement("canvas").getContext,$t=navigator.userAgent.match(/(iphone|ipod|android)/gi)
}function n(){function e(){a.length&&head.js.apply(null,a),r()}function t(t){head.ready(t.src.match(/([\w\d_\-]*)\.?js$|[^\\\/]*$/i)[0],function(){"function"==typeof t.callback&&t.callback.apply(this),0===--o&&e()})}for(var n=[],a=[],o=0,i=0,s=Jt.dependencies.length;s>i;i++){var c=Jt.dependencies[i];(!c.condition||c.condition())&&(c.async?a.push(c.src):n.push(c.src),t(c))}n.length?(o=n.length,head.js.apply(null,n)):e()}function r(){a(),X(),s(),nt(),V(!0),setTimeout(function(){rn.slides.classList.remove("no-transition"),en=!0,y("ready",{indexh:Xt,indexv:Ut,currentSlide:jt})
},1)}function a(){rn.theme=document.querySelector("#theme"),rn.wrapper=document.querySelector(".reveal"),rn.slides=document.querySelector(".reveal .slides"),rn.slides.classList.add("no-transition"),rn.background=o(rn.wrapper,"div","backgrounds",null),rn.progress=o(rn.wrapper,"div","progress","<span></span>"),rn.progressbar=rn.progress.querySelector("span"),o(rn.wrapper,"aside","controls",'<div class="navigate-left"></div><div class="navigate-right"></div><div class="navigate-up"></div><div class="navigate-down"></div>'),rn.slideNumber=o(rn.wrapper,"div","slide-number",""),o(rn.wrapper,"div","state-background",null),o(rn.wrapper,"div","pause-overlay",null),rn.controls=document.querySelector(".reveal .controls"),rn.controlsLeft=u(document.querySelectorAll(".navigate-left")),rn.controlsRight=u(document.querySelectorAll(".navigate-right")),rn.controlsUp=u(document.querySelectorAll(".navigate-up")),rn.controlsDown=u(document.querySelectorAll(".navigate-down")),rn.controlsPrev=u(document.querySelectorAll(".navigate-prev")),rn.controlsNext=u(document.querySelectorAll(".navigate-next"))
}function o(e,t,n,r){var a=e.querySelector("."+n);return a||(a=document.createElement(t),a.classList.add(n),null!==r&&(a.innerHTML=r),e.appendChild(a)),a}function i(){function e(e,t){var n={background:e.getAttribute("data-background"),backgroundSize:e.getAttribute("data-background-size"),backgroundImage:e.getAttribute("data-background-image"),backgroundColor:e.getAttribute("data-background-color"),backgroundRepeat:e.getAttribute("data-background-repeat"),backgroundPosition:e.getAttribute("data-background-position"),backgroundTransition:e.getAttribute("data-background-transition")},r=document.createElement("div");
return r.className="slide-background",n.background&&(/^(http|file|\/\/)/gi.test(n.background)||/\.(svg|png|jpg|jpeg|gif|bmp)$/gi.test(n.background)?r.style.backgroundImage="url("+n.background+")":r.style.background=n.background),(n.background||n.backgroundColor||n.backgroundImage)&&r.setAttribute("data-background-hash",n.background+n.backgroundSize+n.backgroundImage+n.backgroundColor+n.backgroundRepeat+n.backgroundPosition+n.backgroundTransition),n.backgroundSize&&(r.style.backgroundSize=n.backgroundSize),n.backgroundImage&&(r.style.backgroundImage='url("'+n.backgroundImage+'")'),n.backgroundColor&&(r.style.backgroundColor=n.backgroundColor),n.backgroundRepeat&&(r.style.backgroundRepeat=n.backgroundRepeat),n.backgroundPosition&&(r.style.backgroundPosition=n.backgroundPosition),n.backgroundTransition&&r.setAttribute("data-background-transition",n.backgroundTransition),t.appendChild(r),r
}g()&&document.body.classList.add("print-pdf"),rn.background.innerHTML="",rn.background.classList.add("no-transition"),u(document.querySelectorAll(Qt)).forEach(function(t){var n;n=g()?e(t,t):e(t,rn.background),u(t.querySelectorAll("section")).forEach(function(t){g()?e(t,t):e(t,n)})}),Jt.parallaxBackgroundImage?(rn.background.style.backgroundImage='url("'+Jt.parallaxBackgroundImage+'")',rn.background.style.backgroundSize=Jt.parallaxBackgroundSize,setTimeout(function(){rn.wrapper.classList.add("has-parallax-background")
},1)):(rn.background.style.backgroundImage="",rn.wrapper.classList.remove("has-parallax-background"))}function s(e){var t=document.querySelectorAll(Vt).length;if(rn.wrapper.classList.remove(Jt.transition),"object"==typeof e&&d(Jt,e),an.transforms3d===!1&&(Jt.transition="linear"),rn.wrapper.classList.add(Jt.transition),rn.wrapper.setAttribute("data-transition-speed",Jt.transitionSpeed),rn.wrapper.setAttribute("data-background-transition",Jt.backgroundTransition),rn.controls.style.display=Jt.controls?"block":"none",rn.progress.style.display=Jt.progress?"block":"none",Jt.rtl?rn.wrapper.classList.add("rtl"):rn.wrapper.classList.remove("rtl"),Jt.center?rn.wrapper.classList.add("center"):rn.wrapper.classList.remove("center"),Jt.mouseWheel?(document.addEventListener("DOMMouseScroll",qt,!1),document.addEventListener("mousewheel",qt,!1)):(document.removeEventListener("DOMMouseScroll",qt,!1),document.removeEventListener("mousewheel",qt,!1)),Jt.rollingLinks?w():k(),Jt.previewLinks?L():(S(),L("[data-preview-link]")),t>1&&Jt.autoSlide&&Jt.autoSlideStoppable&&an.canvas&&an.requestAnimationFrame?(Kt=new Yt(rn.wrapper,function(){return Math.min(Math.max((Date.now()-pn)/un,0),1)
}),Kt.on("click",Wt),vn=!1):Kt&&(Kt.destroy(),Kt=null),Jt.theme&&rn.theme){var n=rn.theme.getAttribute("href"),r=/[^\/]*?(?=\.css)/,a=n.match(r)[0];Jt.theme!==a&&(n=n.replace(r,Jt.theme),rn.theme.setAttribute("href",n))}Y()}function c(){if(dn=!0,window.addEventListener("hashchange",Rt,!1),window.addEventListener("resize",Ht,!1),Jt.touch&&(rn.wrapper.addEventListener("touchstart",kt,!1),rn.wrapper.addEventListener("touchmove",Lt,!1),rn.wrapper.addEventListener("touchend",St,!1),window.navigator.msPointerEnabled&&(rn.wrapper.addEventListener("MSPointerDown",Et,!1),rn.wrapper.addEventListener("MSPointerMove",At,!1),rn.wrapper.addEventListener("MSPointerUp",xt,!1))),Jt.keyboard&&document.addEventListener("keydown",wt,!1),Jt.progress&&rn.progress&&rn.progress.addEventListener("click",Mt,!1),Jt.focusBodyOnPageVisiblityChange){var e;
"hidden"in document?e="visibilitychange":"msHidden"in document?e="msvisibilitychange":"webkitHidden"in document&&(e="webkitvisibilitychange"),e&&document.addEventListener(e,Ot,!1)}["touchstart","click"].forEach(function(e){rn.controlsLeft.forEach(function(t){t.addEventListener(e,Tt,!1)}),rn.controlsRight.forEach(function(t){t.addEventListener(e,Pt,!1)}),rn.controlsUp.forEach(function(t){t.addEventListener(e,Nt,!1)}),rn.controlsDown.forEach(function(t){t.addEventListener(e,It,!1)}),rn.controlsPrev.forEach(function(t){t.addEventListener(e,Ct,!1)
}),rn.controlsNext.forEach(function(t){t.addEventListener(e,Dt,!1)})})}function l(){dn=!1,document.removeEventListener("keydown",wt,!1),window.removeEventListener("hashchange",Rt,!1),window.removeEventListener("resize",Ht,!1),rn.wrapper.removeEventListener("touchstart",kt,!1),rn.wrapper.removeEventListener("touchmove",Lt,!1),rn.wrapper.removeEventListener("touchend",St,!1),window.navigator.msPointerEnabled&&(rn.wrapper.removeEventListener("MSPointerDown",Et,!1),rn.wrapper.removeEventListener("MSPointerMove",At,!1),rn.wrapper.removeEventListener("MSPointerUp",xt,!1)),Jt.progress&&rn.progress&&rn.progress.removeEventListener("click",Mt,!1),["touchstart","click"].forEach(function(e){rn.controlsLeft.forEach(function(t){t.removeEventListener(e,Tt,!1)
}),rn.controlsRight.forEach(function(t){t.removeEventListener(e,Pt,!1)}),rn.controlsUp.forEach(function(t){t.removeEventListener(e,Nt,!1)}),rn.controlsDown.forEach(function(t){t.removeEventListener(e,It,!1)}),rn.controlsPrev.forEach(function(t){t.removeEventListener(e,Ct,!1)}),rn.controlsNext.forEach(function(t){t.removeEventListener(e,Dt,!1)})})}function d(e,t){for(var n in t)e[n]=t[n]}function u(e){return Array.prototype.slice.call(e)}function f(e,t){var n=e.x-t.x,r=e.y-t.y;return Math.sqrt(n*n+r*r)
}function p(e,t){e.style.WebkitTransform=t,e.style.MozTransform=t,e.style.msTransform=t,e.style.OTransform=t,e.style.transform=t}function v(e){var t=0;if(e){var n=0;u(e.childNodes).forEach(function(e){"number"==typeof e.offsetTop&&e.style&&("absolute"===e.style.position&&(n+=1),t=Math.max(t,e.offsetTop+e.offsetHeight))}),0===n&&(t=e.offsetHeight)}return t}function h(e,t){if(t=t||0,e){var n=e.parentNode,r=n.childNodes;u(r).forEach(function(n){if("number"==typeof n.offsetHeight&&n!==e){var r=window.getComputedStyle(n),a=parseInt(r.marginTop,10),o=parseInt(r.marginBottom,10);
t-=n.offsetHeight+a+o}});var a=window.getComputedStyle(e);t-=parseInt(a.marginTop,10)+parseInt(a.marginBottom,10)}return t}function g(){return/print-pdf/gi.test(window.location.search)}function m(){Jt.hideAddressBar&&$t&&(window.addEventListener("load",b,!1),window.addEventListener("orientationchange",b,!1))}function b(){setTimeout(function(){window.scrollTo(0,1)},10)}function y(e,t){var n=document.createEvent("HTMLEvents",1,2);n.initEvent(e,!0,!0),d(n,t),rn.wrapper.dispatchEvent(n)}function w(){if(an.transforms3d&&!("msPerspective"in document.body.style))for(var e=document.querySelectorAll(Vt+" a:not(.image)"),t=0,n=e.length;n>t;t++){var r=e[t];
if(!(!r.textContent||r.querySelector("*")||r.className&&r.classList.contains(r,"roll"))){var a=document.createElement("span");a.setAttribute("data-title",r.text),a.innerHTML=r.innerHTML,r.classList.add("roll"),r.innerHTML="",r.appendChild(a)}}}function k(){for(var e=document.querySelectorAll(Vt+" a.roll"),t=0,n=e.length;n>t;t++){var r=e[t],a=r.querySelector("span");a&&(r.classList.remove("roll"),r.innerHTML=a.innerHTML)}}function L(e){var t=u(document.querySelectorAll(e?e:"a"));t.forEach(function(e){/^(http|www)/gi.test(e.getAttribute("href"))&&e.addEventListener("click",Ft,!1)
})}function S(){var e=u(document.querySelectorAll("a"));e.forEach(function(e){/^(http|www)/gi.test(e.getAttribute("href"))&&e.removeEventListener("click",Ft,!1)})}function E(e){A(),rn.preview=document.createElement("div"),rn.preview.classList.add("preview-link-overlay"),rn.wrapper.appendChild(rn.preview),rn.preview.innerHTML=["<header>",'<a class="close" href="#"><span class="icon"></span></a>','<a class="external" href="'+e+'" target="_blank"><span class="icon"></span></a>',"</header>",'<div class="spinner"></div>','<div class="viewport">','<iframe src="'+e+'"></iframe>',"</div>"].join(""),rn.preview.querySelector("iframe").addEventListener("load",function(){rn.preview.classList.add("loaded")
},!1),rn.preview.querySelector(".close").addEventListener("click",function(e){A(),e.preventDefault()},!1),rn.preview.querySelector(".external").addEventListener("click",function(){A()},!1),setTimeout(function(){rn.preview.classList.add("visible")},1)}function A(){rn.preview&&(rn.preview.setAttribute("src",""),rn.preview.parentNode.removeChild(rn.preview),rn.preview=null)}function x(){if(rn.wrapper&&!g()){var e=rn.wrapper.offsetWidth,t=rn.wrapper.offsetHeight;e-=t*Jt.margin,t-=t*Jt.margin;var n=Jt.width,r=Jt.height,a=20;
q(Jt.width,Jt.height,a),"string"==typeof n&&/%$/.test(n)&&(n=parseInt(n,10)/100*e),"string"==typeof r&&/%$/.test(r)&&(r=parseInt(r,10)/100*t),rn.slides.style.width=n+"px",rn.slides.style.height=r+"px",nn=Math.min(e/n,t/r),nn=Math.max(nn,Jt.minScale),nn=Math.min(nn,Jt.maxScale),"undefined"==typeof rn.slides.style.zoom||navigator.userAgent.match(/(iphone|ipod|ipad|android)/gi)?p(rn.slides,"translate(-50%, -50%) scale("+nn+") translate(50%, 50%)"):rn.slides.style.zoom=nn;for(var o=u(document.querySelectorAll(Vt)),i=0,s=o.length;s>i;i++){var c=o[i];
"none"!==c.style.display&&(c.style.top=Jt.center||c.classList.contains("center")?c.classList.contains("stack")?0:Math.max(-(v(c)/2)-a,-r/2)+"px":"")}_(),Q()}}function q(e,t,n){u(rn.slides.querySelectorAll("section > .stretch")).forEach(function(r){var a=h(r,t-2*n);if(/(img|video)/gi.test(r.nodeName)){var o=r.naturalWidth||r.videoWidth,i=r.naturalHeight||r.videoHeight,s=Math.min(e/o,a/i);r.style.width=o*s+"px",r.style.height=i*s+"px"}else r.style.width=e+"px",r.style.height=a+"px"})}function M(e,t){"object"==typeof e&&"function"==typeof e.setAttribute&&e.setAttribute("data-previous-indexv",t||0)
}function T(e){if("object"==typeof e&&"function"==typeof e.setAttribute&&e.classList.contains("stack")){var t=e.hasAttribute("data-start-indexv")?"data-start-indexv":"data-previous-indexv";return parseInt(e.getAttribute(t)||0,10)}return 0}function P(){if(Jt.overview){dt();var e=rn.wrapper.classList.contains("overview"),t=window.innerWidth<400?1e3:2500;rn.wrapper.classList.add("overview"),rn.wrapper.classList.remove("overview-deactivating"),clearTimeout(cn),clearTimeout(ln),cn=setTimeout(function(){for(var n=document.querySelectorAll(Qt),r=0,a=n.length;a>r;r++){var o=n[r],i=Jt.rtl?-105:105;
if(o.setAttribute("data-index-h",r),p(o,"translateZ(-"+t+"px) translate("+(r-Xt)*i+"%, 0%)"),o.classList.contains("stack"))for(var s=o.querySelectorAll("section"),c=0,l=s.length;l>c;c++){var d=r===Xt?Ut:T(o),u=s[c];u.setAttribute("data-index-h",r),u.setAttribute("data-index-v",c),p(u,"translate(0%, "+105*(c-d)+"%)"),u.addEventListener("click",zt,!0)}else o.addEventListener("click",zt,!0)}j(),x(),e||y("overviewshown",{indexh:Xt,indexv:Ut,currentSlide:jt})},10)}}function N(){Jt.overview&&(clearTimeout(cn),clearTimeout(ln),rn.wrapper.classList.remove("overview"),rn.wrapper.classList.add("overview-deactivating"),ln=setTimeout(function(){rn.wrapper.classList.remove("overview-deactivating")
},1),u(document.querySelectorAll(Vt)).forEach(function(e){p(e,""),e.removeEventListener("click",zt,!0)}),W(Xt,Ut),lt(),y("overviewhidden",{indexh:Xt,indexv:Ut,currentSlide:jt}))}function I(e){"boolean"==typeof e?e?P():N():C()?N():P()}function C(){return rn.wrapper.classList.contains("overview")}function D(e){return e=e?e:jt,e&&e.parentNode&&!!e.parentNode.nodeName.match(/section/i)}function R(){var e=document.body,t=e.requestFullScreen||e.webkitRequestFullscreen||e.webkitRequestFullScreen||e.mozRequestFullScreen||e.msRequestFullScreen;
t&&t.apply(e)}function H(){var e=rn.wrapper.classList.contains("paused");dt(),rn.wrapper.classList.add("paused"),e===!1&&y("paused")}function O(){var e=rn.wrapper.classList.contains("paused");rn.wrapper.classList.remove("paused"),lt(),e&&y("resumed")}function z(){F()?O():H()}function F(){return rn.wrapper.classList.contains("paused")}function W(e,t,n,r){Bt=jt;var a=document.querySelectorAll(Qt);void 0===t&&(t=T(a[e])),Bt&&Bt.parentNode&&Bt.parentNode.classList.contains("stack")&&M(Bt.parentNode,Ut);
var o=tn.concat();tn.length=0;var i=Xt||0,s=Ut||0;Xt=B(Qt,void 0===e?Xt:e),Ut=B(Zt,void 0===t?Ut:t),j(),x();e:for(var c=0,l=tn.length;l>c;c++){for(var d=0;d<o.length;d++)if(o[d]===tn[c]){o.splice(d,1);continue e}document.documentElement.classList.add(tn[c]),y(tn[c])}for(;o.length;)document.documentElement.classList.remove(o.pop());C()&&P();var f=a[Xt],p=f.querySelectorAll("section");jt=p[Ut]||f,"undefined"!=typeof n&&it(n);var v=Xt!==i||Ut!==s;v?y("slidechanged",{indexh:Xt,indexv:Ut,previousSlide:Bt,currentSlide:jt,origin:r}):Bt=null,Bt&&(Bt.classList.remove("present"),document.querySelector(Gt).classList.contains("present")&&setTimeout(function(){var e,t=u(document.querySelectorAll(Qt+".stack"));
for(e in t)t[e]&&M(t[e],0)},0)),v&&(et(Bt),J(jt)),K(),_(),V(),Q(),$(),rt(),lt()}function Y(){l(),c(),x(),un=Jt.autoSlide,lt(),i(),U(),K(),_(),V(!0),$()}function X(){var e=u(document.querySelectorAll(Qt));e.forEach(function(e){var t=u(e.querySelectorAll("section"));t.forEach(function(e,t){t>0&&(e.classList.remove("present"),e.classList.remove("past"),e.classList.add("future"))})})}function U(){var e=u(document.querySelectorAll(Qt));e.forEach(function(e){var t=u(e.querySelectorAll("section"));t.forEach(function(e){ot(e.querySelectorAll(".fragment"))
}),0===t.length&&ot(e.querySelectorAll(".fragment"))})}function B(e,t){var n=u(document.querySelectorAll(e)),r=n.length;if(r){Jt.loop&&(t%=r,0>t&&(t=r+t)),t=Math.max(Math.min(t,r-1),0);for(var a=0;r>a;a++){var o=n[a],i=Jt.rtl&&!D(o);if(o.classList.remove("past"),o.classList.remove("present"),o.classList.remove("future"),o.setAttribute("hidden",""),t>a){o.classList.add(i?"future":"past");for(var s=u(o.querySelectorAll(".fragment"));s.length;){var c=s.pop();c.classList.add("visible"),c.classList.remove("current-fragment")
}}else if(a>t){o.classList.add(i?"past":"future");for(var l=u(o.querySelectorAll(".fragment.visible"));l.length;){var d=l.pop();d.classList.remove("visible"),d.classList.remove("current-fragment")}}o.querySelector("section")&&o.classList.add("stack")}n[t].classList.add("present"),n[t].removeAttribute("hidden");var f=n[t].getAttribute("data-state");f&&(tn=tn.concat(f.split(" ")))}else t=0;return t}function j(){var e,t,n=u(document.querySelectorAll(Qt)),r=n.length;if(r){var a=C()?10:Jt.viewDistance;
$t&&(a=C()?6:1);for(var o=0;r>o;o++){var i=n[o],s=u(i.querySelectorAll("section")),c=s.length;if(e=Math.abs((Xt-o)%(r-a))||0,i.style.display=e>a?"none":"block",c)for(var l=T(i),d=0;c>d;d++){var f=s[d];t=Math.abs(o===Xt?Ut-d:d-l),f.style.display=e+t>a?"none":"block"}}}}function _(){if(Jt.progress&&rn.progress){var e=u(document.querySelectorAll(Qt)),t=document.querySelectorAll(Vt+":not(.stack)").length,n=0;e:for(var r=0;r<e.length;r++){for(var a=e[r],o=u(a.querySelectorAll("section")),i=0;i<o.length;i++){if(o[i].classList.contains("present"))break e;
n++}if(a.classList.contains("present"))break;a.classList.contains("stack")===!1&&n++}rn.progressbar.style.width=n/(t-1)*window.innerWidth+"px"}}function $(){if(Jt.slideNumber&&rn.slideNumber){var e=Xt;Ut>0&&(e+=" - "+Ut),rn.slideNumber.innerHTML=e}}function K(){var e=Z(),t=G();rn.controlsLeft.concat(rn.controlsRight).concat(rn.controlsUp).concat(rn.controlsDown).concat(rn.controlsPrev).concat(rn.controlsNext).forEach(function(e){e.classList.remove("enabled"),e.classList.remove("fragmented")}),e.left&&rn.controlsLeft.forEach(function(e){e.classList.add("enabled")
}),e.right&&rn.controlsRight.forEach(function(e){e.classList.add("enabled")}),e.up&&rn.controlsUp.forEach(function(e){e.classList.add("enabled")}),e.down&&rn.controlsDown.forEach(function(e){e.classList.add("enabled")}),(e.left||e.up)&&rn.controlsPrev.forEach(function(e){e.classList.add("enabled")}),(e.right||e.down)&&rn.controlsNext.forEach(function(e){e.classList.add("enabled")}),jt&&(t.prev&&rn.controlsPrev.forEach(function(e){e.classList.add("fragmented","enabled")}),t.next&&rn.controlsNext.forEach(function(e){e.classList.add("fragmented","enabled")
}),D(jt)?(t.prev&&rn.controlsUp.forEach(function(e){e.classList.add("fragmented","enabled")}),t.next&&rn.controlsDown.forEach(function(e){e.classList.add("fragmented","enabled")})):(t.prev&&rn.controlsLeft.forEach(function(e){e.classList.add("fragmented","enabled")}),t.next&&rn.controlsRight.forEach(function(e){e.classList.add("fragmented","enabled")})))}function V(e){var t=null,n=Jt.rtl?"future":"past",r=Jt.rtl?"past":"future";if(u(rn.background.childNodes).forEach(function(a,o){Xt>o?a.className="slide-background "+n:o>Xt?a.className="slide-background "+r:(a.className="slide-background present",t=a),(e||o===Xt)&&u(a.childNodes).forEach(function(e,n){Ut>n?e.className="slide-background past":n>Ut?e.className="slide-background future":(e.className="slide-background present",o===Xt&&(t=e))
})}),t){var a=_t?_t.getAttribute("data-background-hash"):null,o=t.getAttribute("data-background-hash");o&&o===a&&t!==_t&&rn.background.classList.add("no-transition"),_t=t}setTimeout(function(){rn.background.classList.remove("no-transition")},1)}function Q(){if(Jt.parallaxBackgroundImage){var e,t,n=document.querySelectorAll(Qt),r=document.querySelectorAll(Zt),a=rn.background.style.backgroundSize.split(" ");1===a.length?e=t=parseInt(a[0],10):(e=parseInt(a[0],10),t=parseInt(a[1],10));var o=rn.background.offsetWidth,i=n.length,s=-(e-o)/(i-1)*Xt,c=rn.background.offsetHeight,l=r.length,d=l>0?-(t-c)/(l-1)*Ut:0;
rn.background.style.backgroundPosition=s+"px "+d+"px"}}function Z(){var e=document.querySelectorAll(Qt),t=document.querySelectorAll(Zt),n={left:Xt>0||Jt.loop,right:Xt<e.length-1||Jt.loop,up:Ut>0,down:Ut<t.length-1};if(Jt.rtl){var r=n.left;n.left=n.right,n.right=r}return n}function G(){if(jt&&Jt.fragments){var e=jt.querySelectorAll(".fragment"),t=jt.querySelectorAll(".fragment:not(.visible)");return{prev:e.length-t.length>0,next:!!t.length}}return{prev:!1,next:!1}}function J(e){e&&!tt()&&(u(e.querySelectorAll("video, audio")).forEach(function(e){e.hasAttribute("data-autoplay")&&e.play()
}),u(e.querySelectorAll("iframe")).forEach(function(e){e.contentWindow.postMessage("slide:start","*")}),u(e.querySelectorAll('iframe[src*="youtube.com/embed/"]')).forEach(function(e){e.hasAttribute("data-autoplay")&&e.contentWindow.postMessage('{"event":"command","func":"playVideo","args":""}',"*")}))}function et(e){e&&(u(e.querySelectorAll("video, audio")).forEach(function(e){e.hasAttribute("data-ignore")||e.pause()}),u(e.querySelectorAll("iframe")).forEach(function(e){e.contentWindow.postMessage("slide:stop","*")
}),u(e.querySelectorAll('iframe[src*="youtube.com/embed/"]')).forEach(function(e){e.hasAttribute("data-ignore")||"function"!=typeof e.contentWindow.postMessage||e.contentWindow.postMessage('{"event":"command","func":"pauseVideo","args":""}',"*")}))}function tt(){return!!window.location.search.match(/receiver/gi)}function nt(){var e=window.location.hash,t=e.slice(2).split("/"),n=e.replace(/#|\//gi,"");if(isNaN(parseInt(t[0],10))&&n.length){var r=document.querySelector("#"+n);if(r){var a=Reveal.getIndices(r);
W(a.h,a.v)}else W(Xt||0,Ut||0)}else{var o=parseInt(t[0],10)||0,i=parseInt(t[1],10)||0;(o!==Xt||i!==Ut)&&W(o,i)}}function rt(e){if(Jt.history)if(clearTimeout(sn),"number"==typeof e)sn=setTimeout(rt,e);else{var t="/";jt&&"string"==typeof jt.getAttribute("id")?t="/"+jt.getAttribute("id"):((Xt>0||Ut>0)&&(t+=Xt),Ut>0&&(t+="/"+Ut)),window.location.hash=t}}function at(e){var t,n=Xt,r=Ut;if(e){var a=D(e),o=a?e.parentNode:e,i=u(document.querySelectorAll(Qt));n=Math.max(i.indexOf(o),0),a&&(r=Math.max(u(e.parentNode.querySelectorAll("section")).indexOf(e),0))
}if(!e&&jt){var s=jt.querySelectorAll(".fragment").length>0;if(s){var c=jt.querySelectorAll(".fragment.visible");t=c.length-1}}return{h:n,v:r,f:t}}function ot(e){e=u(e);var t=[],n=[],r=[];e.forEach(function(e){if(e.hasAttribute("data-fragment-index")){var r=parseInt(e.getAttribute("data-fragment-index"),10);t[r]||(t[r]=[]),t[r].push(e)}else n.push([e])}),t=t.concat(n);var a=0;return t.forEach(function(e){e.forEach(function(e){r.push(e),e.setAttribute("data-fragment-index",a)}),a++}),r}function it(e,t){if(jt&&Jt.fragments){var n=ot(jt.querySelectorAll(".fragment"));
if(n.length){if("number"!=typeof e){var r=ot(jt.querySelectorAll(".fragment.visible")).pop();e=r?parseInt(r.getAttribute("data-fragment-index")||0,10):-1}"number"==typeof t&&(e+=t);var a=[],o=[];return u(n).forEach(function(t,n){t.hasAttribute("data-fragment-index")&&(n=parseInt(t.getAttribute("data-fragment-index"),10)),e>=n?(t.classList.contains("visible")||a.push(t),t.classList.add("visible"),t.classList.remove("current-fragment"),n===e&&t.classList.add("current-fragment")):(t.classList.contains("visible")&&o.push(t),t.classList.remove("visible"),t.classList.remove("current-fragment"))
}),o.length&&y("fragmenthidden",{fragment:o[0],fragments:o}),a.length&&y("fragmentshown",{fragment:a[0],fragments:a}),K(),!(!a.length&&!o.length)}}return!1}function st(){return it(null,1)}function ct(){return it(null,-1)}function lt(){if(dt(),jt){var e=jt.parentNode?jt.parentNode.getAttribute("data-autoslide"):null,t=jt.getAttribute("data-autoslide");un=t?parseInt(t,10):e?parseInt(e,10):Jt.autoSlide,u(jt.querySelectorAll("video, audio")).forEach(function(e){e.hasAttribute("data-autoplay")&&un&&1e3*e.duration>un&&(un=1e3*e.duration+1e3)
}),!un||vn||F()||C()||Reveal.isLastSlide()&&Jt.loop!==!0||(fn=setTimeout(bt,un),pn=Date.now()),Kt&&Kt.setPlaying(-1!==fn)}}function dt(){clearTimeout(fn),fn=-1}function ut(){vn=!0,clearTimeout(fn),Kt&&Kt.setPlaying(!1)}function ft(){vn=!1,lt()}function pt(){Jt.rtl?(C()||st()===!1)&&Z().left&&W(Xt+1):(C()||ct()===!1)&&Z().left&&W(Xt-1)}function vt(){Jt.rtl?(C()||ct()===!1)&&Z().right&&W(Xt-1):(C()||st()===!1)&&Z().right&&W(Xt+1)}function ht(){(C()||ct()===!1)&&Z().up&&W(Xt,Ut-1)}function gt(){(C()||st()===!1)&&Z().down&&W(Xt,Ut+1)
}function mt(){if(ct()===!1)if(Z().up)ht();else{var e=document.querySelector(Qt+".past:nth-child("+Xt+")");if(e){var t=e.querySelectorAll("section").length-1||void 0,n=Xt-1;W(n,t)}}}function bt(){st()===!1&&(Z().down?gt():vt()),lt()}function yt(){Jt.autoSlideStoppable&&ut()}function wt(e){yt(e);var t=(document.activeElement,!(!document.activeElement||!document.activeElement.type&&!document.activeElement.href&&"inherit"===document.activeElement.contentEditable));if(!(t||e.shiftKey&&32!==e.keyCode||e.altKey||e.ctrlKey||e.metaKey)){if(F()&&-1===[66,190,191].indexOf(e.keyCode))return!1;
var n=!1;if("object"==typeof Jt.keyboard)for(var r in Jt.keyboard)if(parseInt(r,10)===e.keyCode){var a=Jt.keyboard[r];"function"==typeof a?a.apply(null,[e]):"string"==typeof a&&"function"==typeof Reveal[a]&&Reveal[a].call(),n=!0}if(n===!1)switch(n=!0,e.keyCode){case 80:case 33:mt();break;case 78:case 34:bt();break;case 72:case 37:pt();break;case 76:case 39:vt();break;case 75:case 38:ht();break;case 74:case 40:gt();break;case 36:W(0);break;case 35:W(Number.MAX_VALUE);break;case 32:C()?N():e.shiftKey?mt():bt();
break;case 13:C()?N():n=!1;break;case 66:case 190:case 191:z();break;case 70:R();break;default:n=!1}n?e.preventDefault():27!==e.keyCode&&79!==e.keyCode||!an.transforms3d||(rn.preview?A():I(),e.preventDefault()),lt()}}function kt(e){hn.startX=e.touches[0].clientX,hn.startY=e.touches[0].clientY,hn.startCount=e.touches.length,2===e.touches.length&&Jt.overview&&(hn.startSpan=f({x:e.touches[1].clientX,y:e.touches[1].clientY},{x:hn.startX,y:hn.startY}))}function Lt(e){if(hn.captured)navigator.userAgent.match(/android/gi)&&e.preventDefault();
else{yt(e);var t=e.touches[0].clientX,n=e.touches[0].clientY;if(2===e.touches.length&&2===hn.startCount&&Jt.overview){var r=f({x:e.touches[1].clientX,y:e.touches[1].clientY},{x:hn.startX,y:hn.startY});Math.abs(hn.startSpan-r)>hn.threshold&&(hn.captured=!0,r<hn.startSpan?P():N()),e.preventDefault()}else if(1===e.touches.length&&2!==hn.startCount){var a=t-hn.startX,o=n-hn.startY;a>hn.threshold&&Math.abs(a)>Math.abs(o)?(hn.captured=!0,pt()):a<-hn.threshold&&Math.abs(a)>Math.abs(o)?(hn.captured=!0,vt()):o>hn.threshold?(hn.captured=!0,ht()):o<-hn.threshold&&(hn.captured=!0,gt()),Jt.embedded?(hn.captured||D(jt))&&e.preventDefault():e.preventDefault()
}}}function St(){hn.captured=!1}function Et(e){e.pointerType===e.MSPOINTER_TYPE_TOUCH&&(e.touches=[{clientX:e.clientX,clientY:e.clientY}],kt(e))}function At(e){e.pointerType===e.MSPOINTER_TYPE_TOUCH&&(e.touches=[{clientX:e.clientX,clientY:e.clientY}],Lt(e))}function xt(e){e.pointerType===e.MSPOINTER_TYPE_TOUCH&&(e.touches=[{clientX:e.clientX,clientY:e.clientY}],St(e))}function qt(e){if(Date.now()-on>600){on=Date.now();var t=e.detail||-e.wheelDelta;t>0?bt():mt()}}function Mt(e){yt(e),e.preventDefault();
var t=u(document.querySelectorAll(Qt)).length,n=Math.floor(e.clientX/rn.wrapper.offsetWidth*t);W(n)}function Tt(e){e.preventDefault(),yt(),pt()}function Pt(e){e.preventDefault(),yt(),vt()}function Nt(e){e.preventDefault(),yt(),ht()}function It(e){e.preventDefault(),yt(),gt()}function Ct(e){e.preventDefault(),yt(),mt()}function Dt(e){e.preventDefault(),yt(),bt()}function Rt(){nt()}function Ht(){x()}function Ot(){var e=document.webkitHidden||document.msHidden||document.hidden;e===!1&&document.activeElement!==document.body&&(document.activeElement.blur(),document.body.focus())
}function zt(e){if(dn&&C()){e.preventDefault();for(var t=e.target;t&&!t.nodeName.match(/section/gi);)t=t.parentNode;if(t&&!t.classList.contains("disabled")&&(N(),t.nodeName.match(/section/gi))){var n=parseInt(t.getAttribute("data-index-h"),10),r=parseInt(t.getAttribute("data-index-v"),10);W(n,r)}}}function Ft(e){var t=e.target.getAttribute("href");t&&(E(t),e.preventDefault())}function Wt(){Reveal.isLastSlide()&&Jt.loop===!1?(W(0,0),ft()):vn?ft():ut()}function Yt(e,t){this.diameter=50,this.thickness=3,this.playing=!1,this.progress=0,this.progressOffset=1,this.container=e,this.progressCheck=t,this.canvas=document.createElement("canvas"),this.canvas.className="playback",this.canvas.width=this.diameter,this.canvas.height=this.diameter,this.context=this.canvas.getContext("2d"),this.container.appendChild(this.canvas),this.render()
}var Xt,Ut,Bt,jt,_t,$t,Kt,Vt=".reveal .slides section",Qt=".reveal .slides>section",Zt=".reveal .slides>section.present>section",Gt=".reveal .slides>section:first-of-type",Jt={width:960,height:700,margin:.1,minScale:.2,maxScale:1,controls:!0,progress:!0,slideNumber:!1,history:!1,keyboard:!0,overview:!0,center:!0,touch:!0,loop:!1,rtl:!1,fragments:!0,embedded:!1,autoSlide:0,autoSlideStoppable:!0,mouseWheel:!1,rollingLinks:!1,hideAddressBar:!0,previewLinks:!1,focusBodyOnPageVisiblityChange:!0,theme:null,transition:"default",transitionSpeed:"default",backgroundTransition:"default",parallaxBackgroundImage:"",parallaxBackgroundSize:"",viewDistance:3,dependencies:[]},en=!1,tn=[],nn=1,rn={},an={},on=0,sn=0,cn=0,ln=0,dn=!1,un=0,fn=0,pn=-1,vn=!1,hn={startX:0,startY:0,startSpan:0,startCount:0,captured:!1,threshold:40};
return Yt.prototype.setPlaying=function(e){var t=this.playing;this.playing=e,!t&&this.playing?this.animate():this.render()},Yt.prototype.animate=function(){var e=this.progress;this.progress=this.progressCheck(),e>.8&&this.progress<.2&&(this.progressOffset=this.progress),this.render(),this.playing&&an.requestAnimationFrameMethod.call(window,this.animate.bind(this))},Yt.prototype.render=function(){var e=this.playing?this.progress:0,t=this.diameter/2-this.thickness,n=this.diameter/2,r=this.diameter/2,a=14;
this.progressOffset+=.1*(1-this.progressOffset);var o=-Math.PI/2+2*e*Math.PI,i=-Math.PI/2+2*this.progressOffset*Math.PI;this.context.save(),this.context.clearRect(0,0,this.diameter,this.diameter),this.context.beginPath(),this.context.arc(n,r,t+2,0,2*Math.PI,!1),this.context.fillStyle="rgba( 0, 0, 0, 0.4 )",this.context.fill(),this.context.beginPath(),this.context.arc(n,r,t,0,2*Math.PI,!1),this.context.lineWidth=this.thickness,this.context.strokeStyle="#666",this.context.stroke(),this.playing&&(this.context.beginPath(),this.context.arc(n,r,t,i,o,!1),this.context.lineWidth=this.thickness,this.context.strokeStyle="#fff",this.context.stroke()),this.context.translate(n-a/2,r-a/2),this.playing?(this.context.fillStyle="#fff",this.context.fillRect(0,0,a/2-2,a),this.context.fillRect(a/2+2,0,a/2-2,a)):(this.context.beginPath(),this.context.translate(2,0),this.context.moveTo(0,0),this.context.lineTo(a-2,a/2),this.context.lineTo(0,a),this.context.fillStyle="#fff",this.context.fill()),this.context.restore()
},Yt.prototype.on=function(e,t){this.canvas.addEventListener(e,t,!1)},Yt.prototype.off=function(e,t){this.canvas.removeEventListener(e,t,!1)},Yt.prototype.destroy=function(){this.playing=!1,this.canvas.parentNode&&this.container.removeChild(this.canvas)},{initialize:e,configure:s,sync:Y,slide:W,left:pt,right:vt,up:ht,down:gt,prev:mt,next:bt,navigateFragment:it,prevFragment:ct,nextFragment:st,navigateTo:W,navigateLeft:pt,navigateRight:vt,navigateUp:ht,navigateDown:gt,navigatePrev:mt,navigateNext:bt,layout:x,availableRoutes:Z,availableFragments:G,toggleOverview:I,togglePause:z,isOverview:C,isPaused:F,addEventListeners:c,removeEventListeners:l,getIndices:at,getSlide:function(e,t){var n=document.querySelectorAll(Qt)[e],r=n&&n.querySelectorAll("section");
return"undefined"!=typeof t?r?r[t]:void 0:n},getPreviousSlide:function(){return Bt},getCurrentSlide:function(){return jt},getScale:function(){return nn},getConfig:function(){return Jt},getQueryHash:function(){var e={};location.search.replace(/[A-Z0-9]+?=([\w\.%-]*)/gi,function(t){e[t.split("=").shift()]=t.split("=").pop()});for(var t in e){var n=e[t];e[t]=unescape(n),"null"===n?e[t]=null:"true"===n?e[t]=!0:"false"===n?e[t]=!1:n.match(/^\d+$/)&&(e[t]=parseFloat(n))}return e},isFirstSlide:function(){return null==document.querySelector(Vt+".past")?!0:!1
},isLastSlide:function(){return jt?jt.nextElementSibling?!1:D(jt)&&jt.parentNode.nextElementSibling?!1:!0:!1},isReady:function(){return en},addEventListener:function(e,t,n){"addEventListener"in window&&(rn.wrapper||document.querySelector(".reveal")).addEventListener(e,t,n)},removeEventListener:function(e,t,n){"addEventListener"in window&&(rn.wrapper||document.querySelector(".reveal")).removeEventListener(e,t,n)}}}();