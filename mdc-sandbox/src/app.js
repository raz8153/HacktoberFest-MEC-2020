import 'normalize.css';
import './styles/app.scss';
import { MDCRipple } from '@material/ripple';

document.querySelectorAll('.mdc-button').forEach(el=>{
    new MDCRipple(el)
})
